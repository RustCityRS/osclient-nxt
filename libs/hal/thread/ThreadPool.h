// libs/hal/thread/ThreadPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    class ThreadPool {
    public:
        class TaskInfo;
        ~ThreadPool();
        ThreadPool(unsigned int, char const*);
        std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>::type>
        AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
            char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                             shared_ptr<eastl::priority_queue<
                                 oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                                 eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                                 eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&);
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::type>
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                oldscape::jagex3::Js5&, bool)::$_6>(
            char const*,
            oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                            oldscape::jagex3::Js5&, bool)::$_6&&);
        std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>::type>
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
            char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                             oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&);
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
        >(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&);
        std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type>
        AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
            char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&);
        std::future<std::invoke_result<game::DoEntityPicking(
            eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&,
            int, int, int, int, int, render::Viewport const&, bool)::$_7>::type>
        AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                      unsigned int, game::World&, int, int, int, int, int, render::Viewport const&,
                                      bool)::$_7>(
            char const*,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport const&,
                                  bool)::$_7&&);
        std::future<std::invoke_result<game::DoEntityPicking(
            eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&,
            int, int, int, int, int, render::Viewport const&, bool)::$_8>::type>
        AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                      unsigned int, game::World&, int, int, int, int, int, render::Viewport const&,
                                      bool)::$_8>(
            char const*,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport const&,
                                  bool)::$_8&&);
        std::future<std::invoke_result<game::SeqType::GetAnimation(
            game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
            shared_ptr<graphics::Model> const&)::$_0>::type>
        AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                            game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
            char const*, game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0&&);
        void RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_4::operator()() const ::{
            lambda() #1
        }
        >(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&);
        void RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                     graphics::RT7Core*)::$_5::operator()() const ::{
            lambda() #1
        }
        >(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&);
        std::future < std::invoke_result <
            game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                              graphics::RT7Core*)::$_19::operator()() const ::{
            lambda() #1
        }
        > ::type > AddTask < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                               graphics::RT7Core*)::$_19::operator()() const ::{
            lambda() #1
        }
        >(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&);
        std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>::type>
        AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
            char const*,
            graphics::ParticleSystemRenderer::AddDrawableToBatch(
                graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&);
        std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::type>
        AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
            graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
            char const*,
            graphics::ParticleSystemRenderer::AddDrawableToBatch(
                graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&);
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
            char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                             graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&,
                             graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                             std::function<bool(math::OBB const&, graphics::SceneViewData const&)> const&,
                             graphics::SceneViewData const&)::$_19&&);
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
            char const*,
            graphics::DrawableQueue::FilterAsync(
                graphics::DrawableGroupType, graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_21&&);
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
            char const*,
            graphics::DrawableQueue::FilterMultiAsync(
                graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
                std::function<bool(graphics::Drawable*,
                                   std::unique_ptr<graphics::DrawableElement,
                                                   graphics::DrawableElementDeleter> const&)> const&)::$_23&&);
        std::future < std::invoke_result <
            graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
            lambda() #1
        }
        > ::type > AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                 eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                                 std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                 eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
            lambda() #1
        }
        > (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&);
        std::future < std::invoke_result <
            graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{
            lambda() #1
        }
        > ::type > AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                                 eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                                 std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                                 eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                                 ThreadPool&, float)::{
            lambda() #1
        }
        > (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&);
        std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                                         render::Format)::$_5>::type>
        AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
            char const*,
            graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&);
        std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
            graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>::type>
        AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
            graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(
            char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                             graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&,
                             graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&);
        std::future < std::invoke_result <
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1
        }
        > ::type > AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
            lambda() #1
        }
        >(char const*, graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()::{lambda()#1}&&);
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
        >(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&);
        void SetAffinity(unsigned int);
        std::future<std::invoke_result<
            graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::type>
        AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
            char const*,
            graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&);
        std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
            math::Matrix44T<float> const&)::$_8>::type>
        AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                  Array<graphics::LabelData, eastl::allocator> const&,
                                                                  math::Matrix44T<float> const&)::$_8>(
            char const*,
            graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                              Array<graphics::LabelData, eastl::allocator> const&,
                                                              math::Matrix44T<float> const&)::$_8&&);
        void RunOnceOnAllThreads < SetAffinity(unsigned int)::{
            lambda() #1
        }
        > (char const*, SetAffinity(unsigned int)::{ lambda() #1 }&&);
        std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
            math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>::type>
        AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                         Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                         math::BigInteger*, eastl::string, bool)::$_1>(
            char const*,
            Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                     Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                     math::BigInteger*, eastl::string, bool)::$_1&&);
        std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char const*)::$_0>::type>
        AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*,
                                                                        http::HTTPRequest::Post(char const*,
                                                                                                char const*)::$_0&&);
        void RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&);
        std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename const&)::$_0>::type>
        AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*,
                                                                   FileSystem::DeleteDirectory(Filename const&)::$_0&&);
        std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type>
        AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
            char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&);
        std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type>
        AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&);
        void RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
            char const*, render::RenderDevice::~RenderDevice()::$_106&&);
        void RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
            char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&);
        void RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
            char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&);
        void RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                    (fixedfunction::Methods)0> const&)::$_110>(
            char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                             fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                     (fixedfunction::Methods)0> const&)::$_110&&);
        std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>::type>
        AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::$_111>(
            char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                             char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                  (fixedfunction::Methods)0> const&)::$_111&&);
        InitialiseWorkGroups(unsigned long, unsigned long);
        void Init(unsigned int, char const*);
        void ThreadFunc(int, char const*);
        ulong TrySteal(TaskInfo&, int);

        // data members, from how the methods use this: 200 bytes
        long field_0; // offset 0
        char _unknown_8[192];
    };

    class ThreadPool::TaskInfo {
    public:
        ~TaskInfo();
        TaskInfo(std::function<void()>&&, char const*, TaskPriority, bool);
        TaskInfo();
        TaskInfo* operator=(TaskInfo&&);

        // data members, from how the methods use this: 64 bytes
        char _unknown_0[48];
        undefined4 field_48; // offset 48
        undefined1 field_52; // offset 52
        char _unknown_53[11];
    };

    class ThreadPoolSingleton {
    public:
        GetThreadPool();
        ~ThreadPoolSingleton();
        ThreadPoolSingleton(unsigned int);
        ThreadPoolSingleton();

        // data members, from how the methods use this: 200 bytes
        char _unknown_0[200];
    };

    // 0x100009e30, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ThreadPoolSingleton::~ThreadPoolSingleton(): jumps straight to the base-object destructor

    // 0x100009e30: the linker folded this into ThreadPoolSingleton::~ThreadPoolSingleton(), which has identical code
    ShaderThreadPoolSingleton::~ShaderThreadPoolSingleton();

    // 0x100009e40, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ThreadPoolSingleton::~ThreadPoolSingleton()
    /* ShaderThreadPoolSingleton::~ShaderThreadPoolSingleton() */

    void ShaderThreadPoolSingleton::~ShaderThreadPoolSingleton() {
        ~ThreadPool();
        ~AutoSingleton();
    }

    // 0x100009e40: the linker folded this into ThreadPoolSingleton::~ThreadPoolSingleton(), which has identical code
    ShaderThreadPoolSingleton::~ShaderThreadPoolSingleton();

    // 0x100009e60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ThreadPool::~ThreadPool(): jumps straight to the base-object destructor

    // 0x100009e80, 240 bytes, base-object destructor, inline, placed by class name
    // ThreadPool::~ThreadPool()
    void ThreadPool::~ThreadPool() {
        undefined1* this_00;
        long lVar1;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;

        *(undefined1*)&field_0 = 1;
        std::condition_variable::notify_all();
        this_00 = &field_8;
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            uVar3 = 1;
            uVar4 = 0;
            do {
                eastl::vector<std::thread, eastl::allocator>::operator[](
                    (vector<std::thread, eastl::allocator>*)this_00, uVar4);
                std::thread::join();
                uVar4 = (ulong)uVar3;
                uVar2 = this_00->size();
                uVar3 = uVar3 + 1;
            } while (uVar4 < uVar2);
        }
        (&field_128)->~mutex();
        (&field_96)->~vector();
        (&field_48)->~condition_variable();
        (&field_40)->~unique_ptr();
        this_00->~vector();
    }

    // 0x10000a4b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ThreadPool::TaskInfo::~TaskInfo(): jumps straight to the base-object destructor

    // 0x10000a4c0, 48 bytes, base-object destructor, inline, placed by class name
    // ThreadPool::TaskInfo::~TaskInfo()
    void ThreadPool::TaskInfo::~TaskInfo() {
        /* WARNING: Subroutine does not return */
        (&field_56)->~fixed_string();
    }

    // 0x1001b0780, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // ThreadPoolSingleton::ThreadPoolSingleton(unsigned int): jumps straight to the base-object constructor

    // 0x1001b07a0, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // ThreadPoolSingleton::ThreadPoolSingleton(unsigned int)
    void ThreadPoolSingleton::ThreadPoolSingleton(uint param_1) {
        new (this) AutoSingleton<ThreadPoolSingleton>();
        new (this) ThreadPool(param_1, "TPSingleton");
    }

    // 0x1001b0830, 16 bytes, complete-object constructor, inline, placed by class name
    // ThreadPool::ThreadPool(unsigned int, char const*): jumps straight to the base-object constructor

    // 0x1001b0860, 208 bytes, base-object constructor, inline, placed by class name
    // ThreadPool::ThreadPool(unsigned int, char const*)
    void ThreadPool::ThreadPool(uint param_1, char* param_2) {
        *(undefined1*)&field_0 = 0;
        new (&field_8) eastl::vector<std::thread, eastl::allocator>();
        std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::unique_ptr<true, void>(
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40);
        new (&field_48) std::condition_variable();
        new (&field_96)
            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>();
        new (&field_128) std::mutex();
        std::atomic<unsigned int>::atomic((int)this + 196);
        Init(this, param_1, param_2);
    }

    // 0x1002d2230, 432 bytes, inline, placed by class name
    // std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>::type> ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)
    /* std::future<std::invoke_result<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>::type>
   ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*,
   oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&) */

    ThreadPool* ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(char* param_1, __3* param_2) {
        int iVar1;
        uint uVar2;
        ulong uVar3;
        mutex* pmVar4;
        _lambda___1_* p_Var5;
        __3 local_88[40];
        char* local_60;
        SafeBucketAllocatorSTL local_58[16];
        scoped_lock<std::mutex> local_48[12];
        undefined4 local_3c;
        eastl local_38[8];

        local_60 = "OSRS WAV Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
        std::bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(local_88);
        std::allocate_shared<
            std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
            SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
            std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                shared_ptr<eastl::priority_queue<
                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                    eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>,
            void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_88);
        std::__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>::
            ~__bind((__bind<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>*)local_88);
        iVar1 =
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
        std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
        uVar2 = std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196),
                                                                   iVar1);
        uVar3 = ((param_1 + 8))->size();
        pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
        std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
        if (*param_1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        p_Var5 = (_lambda___1_*)
            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
            operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                               eastl::allocator>*)(param_1 + 96),
                       (ulong)uVar2 % uVar3);
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_88,
                                                                (shared_ptr*)local_58);
        local_3c = 1;
        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
            ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                shared_ptr<eastl::priority_queue<
                    oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                    eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                    eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::__3>(
                char const*,
                (shared_ptr<eastl::priority_queue<
                     oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                     eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                     eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)
                    ->SpawnWaveLoadingTask()::__3&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_88, (TaskPriority*)&local_60);
        AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
            shared_ptr<eastl::priority_queue<
                oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
            char const*, (shared_ptr<eastl::priority_queue<
                              oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                              eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                              eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)
                             ->SpawnWaveLoadingTask()::$_3&&)::{
            lambda() #1
        }
        ::~future((_lambda___1_*)local_88);
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        std::condition_variable::notify_one();
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
        return this;
    }

    // 0x1002e77d0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::~future()
    /* ~future() */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::~future() {
        ~future(this);
    }

    // 0x1002e91f0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x1002e9210, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x1002e99a0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x1002e99c0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x1002e9c30, 32 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::operator()() const
    /* ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*,
   oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
   eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
   eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> >
   >&&)::$_3&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::operator()() {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
            (shared_ptr<std::packaged_task<void()>>*)this);
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x1002e9e00, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3>(char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(shared_ptr<eastl::priority_queue<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>, eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave> > >&&)::$_3&&)::{lambda()#1}::~future()
    /* ~future() */

    void ThreadPool::AddTask<oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
        shared_ptr<eastl::priority_queue<
            oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
            eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
            eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3>(
        char const*, oldscape::midi2::MidiPlayer::SpawnWaveLoadingTask(
                         shared_ptr<eastl::priority_queue<
                             oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave,
                             eastl::vector<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave, eastl::allocator>,
                             eastl::less<oldscape::midi2::MidiPlayerMainThread::QueuedLazyWave>>>&&)::$_3&&)::{
        lambda() #1
    }
    ::~future() {
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
    }

    // 0x1003230f0, 432 bytes, inline, placed by class name
    // std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::type> ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)
    /* std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>::type>
   ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>(char const*,
   oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6&&) */

    ThreadPool* ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>(char* param_1, __6* param_2) {
        int iVar1;
        uint uVar2;
        ulong uVar3;
        mutex* pmVar4;
        _lambda___1_* p_Var5;
        __6 local_88;
        char* local_60;
        SafeBucketAllocatorSTL local_58[16];
        scoped_lock<std::mutex> local_48[12];
        undefined4 local_3c;
        eastl local_38[8];

        local_60 = "OSRS Maya Anim Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
        std::bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>(&local_88);
        std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                             std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                             std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                                 oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>,
                             void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38,
                                   (__bind*)&local_88);
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
            oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>::
            ~__bind((__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                         oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>*)&local_88);
        iVar1 =
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
        std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
        uVar2 = std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196),
                                                                   iVar1);
        uVar3 = ((param_1 + 8))->size();
        pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
        std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
        if (*param_1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        p_Var5 = (_lambda___1_*)
            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
            operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                               eastl::allocator>*)(param_1 + 96),
                       (ulong)uVar2 % uVar3);
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)&local_88,
                                                                (shared_ptr*)local_58);
        local_3c = 1;
        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
            ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
                oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::__6>(
                char const*, (oldscape::jagex3::Js5&)->TryLoad(oldscape::jagex3::Js5&, bool)::__6&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_88, (TaskPriority*)&local_60);
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
                                                                                oldscape::jagex3::Js5&, bool)::$_6>(
            char const*, (oldscape::jagex3::Js5&)->TryLoad(oldscape::jagex3::Js5&, bool)::$_6&&)::{
            lambda() #1
        }
        ::~future((_lambda___1_*)&local_88);
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        std::condition_variable::notify_one();
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
        return this;
    }

    // 0x100323af0, 448 bytes, inline, placed by class name
    // std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>::type> ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)
    /* std::future<std::invoke_result<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>::type>
   ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>(char const*,
   oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7&&) */

    ThreadPool* ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>(char* param_1, __7* param_2) {
        int iVar1;
        uint uVar2;
        ulong uVar3;
        mutex* pmVar4;
        _lambda___1_* p_Var5;
        __7 local_a0[64];
        char* local_60;
        SafeBucketAllocatorSTL local_58[16];
        scoped_lock<std::mutex> local_48[12];
        undefined4 local_3c;
        eastl local_38[8];

        local_60 = "OSRS Maya Curve Load";
        eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
        std::bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>(local_a0);
        std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                             std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                             std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                                 oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>,
                             void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_a0);
        std::__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>::
            ~__bind((__bind<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>*)local_a0);
        iVar1 =
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
        std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
        uVar2 = std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196),
                                                                   iVar1);
        uVar3 = ((param_1 + 8))->size();
        pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
        std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
        if (*param_1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        p_Var5 = (_lambda___1_*)
            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
            operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                               eastl::allocator>*)(param_1 + 96),
                       (ulong)uVar2 % uVar3);
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                (shared_ptr*)local_58);
        local_3c = 1;
        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
            ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::__7>(
                char const*, (oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&)
                                 ->LoadFromPacket(int)::__7&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_a0, (TaskPriority*)&local_60);
        AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
            char const*, (oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&)->LoadFromPacket(int)::$_7&&)::{
            lambda() #1
        }
        ::~future((_lambda___1_*)local_a0);
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
        std::scoped_lock<std::mutex>::~scoped_lock(local_48);
        std::condition_variable::notify_one();
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
        return this;
    }

    // 0x100339a00, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::~future()
    /* ~future() */

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

    // 0x10033aef0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x10033af10, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x10033b6a0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x10033b6c0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x10033b930, 32 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::operator()() const
    /* ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6>(char const*,
   oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&,
   oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::operator()() {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
            (shared_ptr<std::packaged_task<void()>>*)this);
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x10033bb00, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6&&)::{lambda()#1}::~future()
    /* ~future() */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(
        oldscape::jagex3::Js5&, oldscape::jagex3::Js5&, bool)::$_6>(
        char const*,
        oldscape::graphics::animation::OldscapeAnimKeyFrameSet::TryLoad(oldscape::jagex3::Js5&, oldscape::jagex3::Js5&,
                                                                        bool)::$_6&&)::{
        lambda() #1
    }
    ::~future() {
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
    }

    // 0x10033c800, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::~future()
    /* ~future() */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::~future() {
        ~future(this);
    }

    // 0x10033d1a0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x10033d1c0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::future({lambda()#1}&&)
    /* future({lambda()#1}&&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x10033d8e0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        future(this, param_1);
    }

    // 0x10033d900, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::future({lambda()#1} const&)
    /* future({lambda()#1} const&) */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::future(_lambda___1_* param_1) {
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                                (shared_ptr*)param_1);
    }

    // 0x10033db70, 32 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::operator()() const
    /* ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7>(char const*,
   oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned
   char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::operator()() {
        packaged_task<void()>* this_00;

        this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
            (shared_ptr<std::packaged_task<void()>>*)this);
        std::packaged_task<void()>::operator()(this_00);
    }

    // 0x10033dba0, 16 bytes, inline, placed by class name
    // ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7>(char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, int)::$_7&&)::{lambda()#1}::~future()
    /* ~future() */

    void ThreadPool::AddTask<oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
        oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7>(
        char const*, oldscape::graphics::animation::OldscapeAnimKeyFrameSet::LoadFromPacket(
                         oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, int)::$_7&&)::{
        lambda() #1
    }
    ::~future() {
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
    }

    // 0x1003871f0, 384 bytes, inline, placed by class name
    // std::future<std::invoke_result<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>::type> ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)
    /* std::future<std::invoke_result<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}>::type>
   ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}>(char const*,
   graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}&&) */

    ThreadPool* ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::
                                        Flush()::_lambda() _1_>(char* param_1, _lambda___1_* param_2) {
        int iVar1;
        uint uVar2;
        ulong uVar3;
        mutex* pmVar4;
        _lambda___1_* p_Var5;
        _lambda___1_* in_RCX;
        _lambda___1_* local_68;
        SafeBucketAllocatorSTL local_60[16];
        undefined8 local_50[2];
        scoped_lock<std::mutex> local_40[12];
        undefined4 local_34;
        eastl local_30[8];

        local_68 = param_2;
        eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
        local_50[0] = std::bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::GeometryBatchInstance,
            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(in_RCX);
        std::allocate_shared<
            std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
            SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
            std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
                graphics::GeometryBatchInstance,
                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>,
            void>(local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
        iVar1 =
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
        std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
        uVar2 = std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196),
                                                                   iVar1);
        uVar3 = ((param_1 + 8))->size();
        pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
            (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
        std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
        if (*param_1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssertAlways(
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h", 166,
                "Cannot add tasks to the threadpool after stopping it");
        }
        p_Var5 = (_lambda___1_*)
            eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::
            operator[]((vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                               eastl::allocator>*)(param_1 + 96),
                       (ulong)uVar2 % uVar3);
        std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                                (shared_ptr*)local_60);
        local_34 = 1;
        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
            ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<
                graphics::GeometryBatchInstance,
                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
                char const*,
                graphicutils::BatchDestroyHelper<std::unique_ptr<
                    graphics::GeometryBatchInstance,
                    MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>::Flush()::_lambda()
                    _1_&&)::_lambda() _1_,
            char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
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
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_40);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
return this;
}

// 0x1003876b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100389840, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100389860, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100389fd0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100389ff0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10038a270, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}>(char const*,
   graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
> (char const*, graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{ lambda() #1 }&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10038a3d0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask < graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1
}
() #1
}>(char const*,graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x10047ac30, 448 bytes, inline, placed by class name
// std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type> ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)
/* std::future<std::invoke_result<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::type>
   ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char
   const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&) */

ThreadPool* ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(char* param_1,
                                                                                                __5* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __5 local_90;
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "SHCalculate";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(&local_90);
    std::allocate_shared<std::packaged_task<game::MapSquareEnvIrradianceInfo()>,
                         SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>,
                         std::allocator_arg_t_const&,
                         SafeBucketAllocatorSTL<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>&,
                         std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>, void>(
        local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, (__bind*)&local_90);
    std::__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>::~__bind(
        (__bind<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>*)&local_90);
    iVar1 = std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::operator->(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    std::packaged_task<game::MapSquareEnvIrradianceInfo()>::get_future(
        (packaged_task<game::MapSquareEnvIrradianceInfo()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)&local_90, (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(
            char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::__5&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_90, (TaskPriority*)&local_60);
    AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
        char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_90);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x10047c950, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>::type> ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)
/* std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>::type>
   ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>(char const*,
   game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true,
   eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7&&) */

ThreadPool*
ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::__7>(char* param_1, __7* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __7 local_b8[88];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Picking";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                    unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                    bool)::__7>(local_b8);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<game::DoEntityPicking(
                             eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                             unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&, bool)::__7>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_b8);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_b8,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<game::DoEntityPicking(
            eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&,
            int, int, int, int, int, render::Viewport_const&, bool)::__7>(
            char const*,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                  bool)::__7&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_b8, (TaskPriority*)&local_60);
    AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                  bool)::$_7>(
        char const*, game::DoEntityPicking(
                         eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                         game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_b8);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x10047cda0, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>::type> ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)
/* std::future<std::invoke_result<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>::type>
   ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>(char const*,
   game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true,
   eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8&&) */

ThreadPool*
ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                          unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                          bool)::__8>(char* param_1, __8* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __8 local_b0[80];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "PickingTriangle";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                    unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                    bool)::__8>(local_b0);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<game::DoEntityPicking(
                             eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                             unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&, bool)::__8>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_b0);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_b0,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<game::DoEntityPicking(
            eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&,
            int, int, int, int, int, render::Viewport_const&, bool)::__8>(
            char const*,
            game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                  bool)::__8&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_b0, (TaskPriority*)&local_60);
    AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&,
                                  unsigned int, game::World&, int, int, int, int, int, render::Viewport_const&,
                                  bool)::$_8>(
        char const*, game::DoEntityPicking(
                         eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                         game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_b0);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x100482a10, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100484930, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100484950, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this, (shared_ptr*)param_1);
}

// 0x1004850e0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100485100, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this, (shared_ptr*)param_1);
}

// 0x100485370, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char
   const*,
   game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<game::MapSquareEnvIrradianceInfo()>* this_00;

    this_00 = (packaged_task<game::MapSquareEnvIrradianceInfo()>*)
        std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::operator*(
            (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
    std::packaged_task<game::MapSquareEnvIrradianceInfo()>::operator()(this_00);
}

// 0x100485620, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5>(
    char const*, game::LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100488530, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1004891b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1004891d0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100489920, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100489940, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100489bb0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7>(char const*,
   game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true,
   eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_7&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100489c30, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_7&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_7&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x10048a430, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10048ae10, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10048ae30, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10048b550, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10048b570, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10048b7e0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>,
   128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8>(char const*,
   game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true,
   eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int,
   render::Viewport const&, bool)::$_8&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10048b810, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8>(char const*, game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int, game::World&, int, int, int, int, int, render::Viewport const&, bool)::$_8&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8>(
    char const*,
    game::DoEntityPicking(eastl::fixed_vector<shared_ptr<game::Entity>, 128ul, true, eastl::allocator>&, unsigned int,
                          game::World&, int, int, int, int, int, render::Viewport_const&, bool)::$_8&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1004df810, 448 bytes, inline, placed by class name
// std::future<std::invoke_result<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>::type> ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)
/* std::future<std::invoke_result<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>::type>
   ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>(char const*,
   game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0&&) */

ThreadPool* ThreadPool::AddTask<
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::__0>(char* param_1, __0* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __0 local_98[56];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Maya Anim Sample";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                          game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                          unsigned int, shared_ptr<graphics::Model> const&)::__0>(local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<game::SeqType::GetAnimation(
                             game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                             unsigned int, shared_ptr<graphics::Model> const&)::__0>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_98);
    std::__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                            game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::$_0>::
        ~__bind((__bind<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                    game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                    unsigned int, shared_ptr<graphics::Model> const&)::__0>*)local_98);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_98,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<game::SeqType::GetAnimation(
            game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
            shared_ptr<graphics::Model> const&)::__0>(
            char const*, (game::AssetBuilder&)
                             ->GetAnimation(game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                            unsigned int, shared_ptr<graphics::Model> const&)::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_98, (TaskPriority*)&local_60);
    AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                        game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
        char const*, (game::AssetBuilder&)
                         ->GetAnimation(game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                        unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_98);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x1004e7160, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

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

// 0x1004e8aa0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1004e8ac0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1004e9250, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1004e9270, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1004e94e0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0>(char const*,
   game::SeqType::GetAnimation(game::AssetBuilder&,
   game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int,
   shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1004e96b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0>(char const*, game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&, unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<game::SeqType::GetAnimation(game::AssetBuilder&,
                                                     game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                                     unsigned int, shared_ptr<graphics::Model> const&)::$_0>(
    char const*,
    game::SeqType::GetAnimation(game::AssetBuilder&, game::BuildRequest<graphics::Animation, game::BuildAnimationMain>&,
                                unsigned int, shared_ptr<graphics::Model> const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1006f2780, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)
/* void 
   ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const::{lambda()#1}&&)
    */

void ThreadPool::operator()(char* param_1, _lambda___1_* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    vector<eastl::pair<int, int>, eastl::allocator>* local_70;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_68;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_60;
    __atomic_base<unsigned int, true>* local_58;
    scoped_lock<std::mutex> local_50[12];
    undefined4 local_44;
    _lambda___1_ local_40[7];
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "printbucketmetrics";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_58 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::operator()((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                            (SafeBucketAllocatorSTL*)local_38, local_40);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_68, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_50, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_60, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_44 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::operator()(
                p_Var5, (char**)local_a0, (TaskPriority*)&local_78, (bool*)&local_44);
            RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                    graphics::RT7Core*)::$_4::operator()() const ::{
                lambda() #2
            }
            () #1
        }>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
            lambda() #2}()#1
    }&&)::{
        lambda() #2
    }
    ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
    std::__atomic_base<unsigned int, true>::operator++(local_58);
    std::scoped_lock<std::mutex>::~scoped_lock(local_50);
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
    uVar1 = uVar1 + 1;
    uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_70);
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90->HeapBeginPtr();
lVar6 = local_90->end();
for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
return;
}

// 0x1006f2e10, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x1006f3340, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda() #1
}
>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)
::{
    lambda() #1
}
::operator()() {
    const ::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x1006f3ff0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x1006f4010, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1006f47a0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x1006f47c0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1006f4a30, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda() #1
}
>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)
::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1006f4c00, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const::{lambda()#1}&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_4::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_4::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1006f5850, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)
/* void 
   ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const::{lambda()#1}&&)
    */

void ThreadPool::operator()(char* param_1, _lambda___1_* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    vector<eastl::pair<int, int>, eastl::allocator>* local_70;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_68;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_60;
    __atomic_base<unsigned int, true>* local_58;
    scoped_lock<std::mutex> local_50[12];
    undefined4 local_44;
    _lambda___1_ local_40[7];
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "printbucketmetrics";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_58 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::operator()((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                            (SafeBucketAllocatorSTL*)local_38, local_40);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_68, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_50, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_60, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_44 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::operator()(
                p_Var5, (char**)local_a0, (TaskPriority*)&local_78, (bool*)&local_44);
            RunOnceOnAllThreads < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                                                    graphics::RT7Core*)::$_5::operator()() const ::{
                lambda() #2
            }
            () #1
        }>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
            lambda() #2}()#1
    }&&)::{
        lambda() #2
    }
    ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
    std::__atomic_base<unsigned int, true>::operator++(local_58);
    std::scoped_lock<std::mutex>::~scoped_lock(local_50);
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
    uVar1 = uVar1 + 1;
    uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_70);
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90->HeapBeginPtr();
lVar6 = local_90->end();
for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
return;
}

// 0x1006f5c90, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x1006f5fc0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda() #1
}
>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)
::{
    lambda() #1
}
::operator()() {
    const ::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x1006f60a0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x1006f60c0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1006f67e0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x1006f6800, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1006f6a70, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda() #1
}
>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)
::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1006f6aa0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const::{lambda()#1}&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_5::operator()() const ::{
    lambda() #2
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_5::operator()()const::{
    lambda() #2}()#1
}&&)
::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100703190, 384 bytes, inline, placed by class name
// std::future<std::invoke_result<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>::type> ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)
/* std::future<std::invoke_result<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>::type>
   ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const::{lambda()#1}&&)
    */

ThreadPool* ThreadPool::operator()(char* param_1, _lambda___1_* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_68;
    SafeBucketAllocatorSTL local_60[16];
    shared_ptr<std::packaged_task<void()>> local_50[16];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = "Crash";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    std::operator()(local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr(local_50, (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::operator()(p_Var5, (char**)local_50,
                                                                                       (TaskPriority*)&local_68);
    AddTask < game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()()
                  const ::{
        lambda() #1
    }
    () #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)::{
    lambda() #1
}
::~future((_lambda___1_*)local_50);
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_40);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
return this;
}

// 0x100703470, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007038a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1007038c0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100703fe0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100704000, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100704270, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*,
   BaseApp*, graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()
   const::{lambda()#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*,
                                      graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE() const ::{
    lambda() #1
}
>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::TEMPNAMEPLACEHOLDERVALUE()const::{lambda()#1}&&)
::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007042a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}>(char const*, game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const::{lambda()#1}&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask <
    game::RegisterCommonCommandsDebug(console::Console*, BaseApp*, graphics::RT7Core*)::$_19::operator()() const ::{
    lambda() #1
}
() #1
}>(char const*,game::RegisterCommonCommandsDebug(console::Console*,BaseApp*,graphics::RT7Core*)::$_19::operator()()const::{
    lambda() #1}()#1
}&&)
::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1007d4fc0, 496 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>::type> ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)
/* std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>::type>
   ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>(char const*,
   graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10&&) */

ThreadPool* ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__10>(char* param_1,
                                                                                               __10* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_c8;
    SafeBucketAllocatorSTL local_c0[16];
    scoped_lock<std::mutex> local_b0[12];
    undefined4 local_a4;
    eastl local_a0[8];
    __10 local_98;
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_c8 = "Particle Sorting";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_a0, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
        graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__10>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
                             graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__10>,
                         void>(local_c0, (allocator_arg_t*)local_a0, (SafeBucketAllocatorSTL*)local_a0,
                               (__bind*)&local_98);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_c0);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_b0, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)&local_98,
                                                            (shared_ptr*)local_c0);
    local_a4 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__10>(
            char const*, (graphics::ParticleSystem_DE_const&)
                             ->AddDrawableToBatch(render::RenderContext&, render::DrawCallState_const&,
                                                  graphics::SceneViewData_const&, graphics::RenderPassType,
                                                  graphics::EffectManager&)::__10&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_98, (TaskPriority*)&local_c8);
    AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
        graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
        char const*,
        (graphics::ParticleSystem_DE_const&)
            ->AddDrawableToBatch(render::RenderContext&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                                 graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_98);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_b0);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_c0);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x1007d5390, 528 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::type> ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)
/* std::future<std::invoke_result<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>::type>
   ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>(char const*,
   graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12&&) */

ThreadPool* ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__12>(char* param_1,
                                                                                               __12* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_c8;
    SafeBucketAllocatorSTL local_c0[16];
    scoped_lock<std::mutex> local_b0[12];
    undefined4 local_a4;
    eastl local_a0[8];
    __12 local_98;
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_c8 = "Particle Sorting";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_a0, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
        graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__12>(&local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                             graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
                             graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__12>,
                         void>(local_c0, (allocator_arg_t*)local_a0, (SafeBucketAllocatorSTL*)local_a0,
                               (__bind*)&local_98);
    std::__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
        graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>::
        ~__bind(
            (__bind<graphics::ParticleSystemRenderer::AddDrawableToBatch(
                 graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
                 graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__12>*)&local_98);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_c0);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_b0, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)&local_98,
                                                            (shared_ptr*)local_c0);
    local_a4 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
            graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
            graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::__12>(
            char const*, (graphics::ParticleSystem_DE_const&)
                             ->AddDrawableToBatch(render::RenderContext&, render::DrawCallState_const&,
                                                  graphics::SceneViewData_const&, graphics::RenderPassType,
                                                  graphics::EffectManager&)::__12&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_98, (TaskPriority*)&local_c8);
    AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
        graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
        graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
        char const*,
        (graphics::ParticleSystem_DE_const&)
            ->AddDrawableToBatch(render::RenderContext&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                                 graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_98);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_b0);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_c0);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x1007e24f0, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>::type> ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)
/* std::future<std::invoke_result<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>::type>
   ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>(char const*,
   graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19&&) */

ThreadPool* ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::__19>(char* param_1, __19* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __19 local_98[56];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
        graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
        graphics::RenderPassType, graphics::EffectManager&,
        std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
        graphics::SceneViewData_const&)::__19>(local_98);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::DrawableQueue::RenderGroupWithAsyncTest(
                             graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                             graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                             std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                             graphics::SceneViewData_const&)::__19>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_98);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_98,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
            graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
            std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
            graphics::SceneViewData_const&)::__19>(
            char const*, (graphics::RT7Core&)
                             ->RenderGroupWithAsyncTest(
                                 render::DrawCallState_const&, graphics::SceneViewData_const&,
                                 graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                 std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                                 graphics::SceneViewData_const&)::__19&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_98, (TaskPriority*)&local_60);
    AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
        graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
        graphics::RenderPassType, graphics::EffectManager&,
        std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
        graphics::SceneViewData_const&)::$_19>(
        char const*,
        (graphics::RT7Core&)
            ->RenderGroupWithAsyncTest(render::DrawCallState_const&, graphics::SceneViewData_const&,
                                       graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                                       std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                                       graphics::SceneViewData_const&)::$_19&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_98);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x1007e2cb0, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>::type> ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)
/* std::future<std::invoke_result<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>::type>
   ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>(char const*,
   graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21&&) */

ThreadPool* ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(
    graphics::DrawableGroupType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::__21>(
    char* param_1, __21* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __21 local_90[48];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::DrawableQueue::FilterAsync(
        graphics::DrawableGroupType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__21>(
        local_90);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::DrawableQueue::FilterAsync(
            graphics::DrawableGroupType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__21>,
        void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_90);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_90,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
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
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_90, (TaskPriority*)&local_60);
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
    ::~future((_lambda___1_*)local_90);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x1007e3480, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>::type> ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)
/* std::future<std::invoke_result<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>::type>
   ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*,
   graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23&&) */

ThreadPool* ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(
    graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
    std::function<bool(graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
                                                            graphics::DrawableElementDeleter> const&)> const&)::__23>(
    char* param_1, __23* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __23 local_90[48];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Occlusion";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::DrawableQueue::FilterMultiAsync(
        graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
        std::function<bool(
            graphics::Drawable*,
            std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__23>(
        local_90);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::DrawableQueue::FilterMultiAsync(
            graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType,
            std::function<bool(
                graphics::Drawable*,
                std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::__23>,
        void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_90);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_90,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
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
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_90, (TaskPriority*)&local_60);
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
    ::~future((_lambda___1_*)local_90);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x1007edaa0, 400 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>::type> ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)
/* std::future<std::invoke_result<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>::type> ThreadPool::AddTask<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>(char const*,
   eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&) */

ThreadPool* ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
    eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
    std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
    eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>(char* param_1,
                                                                                                     vector* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    vector local_88[40];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "ParticleSystem";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
        eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>(local_88);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>,
        void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_88);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_88,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>(
            char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_88, (TaskPriority*)&local_60);
    AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                  eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                  std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                  eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    () #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask((_lambda___1_*)local_88);
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_48);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
return this;
}

// 0x1007eded0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::~AddTask()
/* ~AddTask() */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask() {
    ~AddTask(this);
}

// 0x1007ef380, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1}&&)
/* AddTask({lambda()#1}&&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    AddTask(this, param_1);
}

// 0x1007ef3a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1}&&)
/* AddTask({lambda()#1}&&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007efb30, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1} const&)
/* AddTask({lambda()#1} const&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    AddTask(this, param_1);
}

// 0x1007efb50, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1} const&)
/* AddTask({lambda()#1} const&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007efdc0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&,
   ThreadPool&, float)::{lambda()#1}>(char const*,
   eastl::vector<graphics::ParticleSystem*,
   eastl::allocator>&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007eff90, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<graphics::ParticleSystem*, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{lambda()#1}::~AddTask()
/* ~AddTask() */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<graphics::ParticleSystem*, eastl::allocator>&, ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<graphics::ParticleSystem*, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1007f03c0, 400 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>::type> ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)
/* std::future<std::invoke_result<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>::type>
   ThreadPool::AddTask<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*,
   eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&) */

ThreadPool* ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
    eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
    std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
    eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::_lambda() _1_>(
    char* param_1, vector* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    vector local_88[40];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "ParticleSystem";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
        eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
        std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
        eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::_lambda()
                  _1_>(local_88);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                             eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                             std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                             eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&,
                             float)::_lambda() _1_>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_88);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_88,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
            std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
            eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&,
            float)::_lambda() _1_>(
            char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_88, (TaskPriority*)&local_60);
    AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                  eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                  std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                  eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{
        lambda() #1
    }
    () #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask((_lambda___1_*)local_88);
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_48);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
return this;
}

// 0x1007f0700, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::~AddTask()
/* ~AddTask() */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask() {
    ~AddTask(this);
}

// 0x1007f0dc0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1}&&)
/* AddTask({lambda()#1}&&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    AddTask(this, param_1);
}

// 0x1007f0de0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1}&&)
/* AddTask({lambda()#1}&&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007f1500, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1} const&)
/* AddTask({lambda()#1} const&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    AddTask(this, param_1);
}

// 0x1007f1520, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::AddTask({lambda()#1} const&)
/* AddTask({lambda()#1} const&) */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::AddTask(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007f1790, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::(anonymous
   namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&,
   unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*,
   eastl::vector<shared_ptr<graphics::ModularParticleSystem>,
   eastl::allocator>&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007f17c0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::(anonymous namespace)::UpdateParticleSystemsImpl<eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator> >(std::vector<std::future<void>, std::allocator<std::future<void> > >&, unsigned long, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&, ThreadPool&, float)::{lambda()#1}>(char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{lambda()#1}::~AddTask()
/* ~AddTask() */

void ThreadPool::AddTask < graphics::(anonymous namespace)::UpdateParticleSystemsImpl<
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>>(
                               std::vector<std::future<void>, std::allocator<std::future<void>>>&, unsigned long,
                               eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&,
                               ThreadPool&, float)::{
    lambda() #1
}
() #1
}
> (char const*, eastl::vector<shared_ptr<graphics::ModularParticleSystem>, eastl::allocator>&&)::{
    lambda() #1
}
::~AddTask() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1007f7ef0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007f85a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1007f85c0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007f8ce0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1007f8d00, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007f8f70, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10>(char const*,
   graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_10&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007f8fa0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_10>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_10&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1007f91d0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1007f9950, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1007f9970, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007fa090, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1007fa0b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1007fa320, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12>(char const*,
   graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   graphics::SceneViewData const&, graphics::RenderPassType,
   graphics::EffectManager&)::$_12&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1007fa350, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(char const*, graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::ParticleSystemRenderer::AddDrawableToBatch(
    graphics::ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
    graphics::SceneViewData_const&, graphics::RenderPassType, graphics::EffectManager&)::$_12>(
    char const*,
    graphics::ParticleSystemRenderer::AddDrawableToBatch(graphics::ParticleSystem_DE_const&, render::RenderContext&,
                                                         render::DrawCallState_const&, graphics::SceneViewData_const&,
                                                         graphics::RenderPassType, graphics::EffectManager&)::$_12&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1007fffc0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100800720, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100800740, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100800e60, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100800e80, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1008010f0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19>(char const*,
   graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&,
   render::DrawCallState const&, graphics::SceneViewData const&,
   graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
   std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&,
   graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100801120, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19>(char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(graphics::RT7Core&, render::DrawCallState const&, graphics::SceneViewData const&, graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&, std::function<bool (math::OBB const&, graphics::SceneViewData const&)> const&, graphics::SceneViewData const&)::$_19&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::DrawableQueue::RenderGroupWithAsyncTest(
    graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&, graphics::DrawableGroupType,
    graphics::RenderPassType, graphics::EffectManager&,
    std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
    graphics::SceneViewData_const&)::$_19>(
    char const*, graphics::DrawableQueue::RenderGroupWithAsyncTest(
                     graphics::RT7Core&, render::DrawCallState_const&, graphics::SceneViewData_const&,
                     graphics::DrawableGroupType, graphics::RenderPassType, graphics::EffectManager&,
                     std::function<bool(math::OBB_const&, graphics::SceneViewData_const&)> const&,
                     graphics::SceneViewData_const&)::$_19&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100801510, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::~future()
/* ~future() */

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

// 0x100801c10, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

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
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100801c30, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

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
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100802350, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

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
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100802370, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

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
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1008025e0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21>(char const*,
   graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, std::function<bool (graphics::Drawable*,
   std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)>
   const&)::$_21&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

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
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100802610, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21>(char const*, graphics::DrawableQueue::FilterAsync(graphics::DrawableGroupType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_21&&)::{lambda()#1}::~future()
/* ~future() */

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
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100802930, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::~future()
/* ~future() */

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

// 0x100803030, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

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
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100803050, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

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
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100803770, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

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
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100803790, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

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
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100803a00, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*,
   graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType,
   graphics::RenderPassType, graphics::RenderPassType, std::function<bool
   (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement,
   graphics::DrawableElementDeleter> const&)>
   const&)::$_23&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

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
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100803a30, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23>(char const*, graphics::DrawableQueue::FilterMultiAsync(graphics::DrawableGroupType, graphics::RenderPassType, graphics::RenderPassType, std::function<bool (graphics::Drawable*, std::unique_ptr<graphics::DrawableElement, graphics::DrawableElementDeleter> const&)> const&)::$_23&&)::{lambda()#1}::~future()
/* ~future() */

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
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100824b70, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>::type> ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)
/* std::future<std::invoke_result<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned
   char const*, render::Format)::$_5>::type>
   ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char
   const*, render::Format)::$_5>(char const*,
   graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
   render::Format)::$_5&&) */

ThreadPool*
ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::__5>(
    char* param_1, __5* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __5 local_98;
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "LoadPackedDepthBuffer";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::__5>(&local_98);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::__5>,
        void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, (__bind*)&local_98);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)&local_98,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
                                                                              render::Format)::__5>(
            char const*, (unsigned char const*)->LoadPackedDepthBuffer(render::Format)::__5&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_98, (TaskPriority*)&local_60);
    AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
        char const*, (unsigned char const*)->LoadPackedDepthBuffer(render::Format)::$_5&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_98);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x1008277b0, 416 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>::type> ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)
/* std::future<std::invoke_result<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>::type>
   ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>(char const*,
   graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&) */

ThreadPool* ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::__6&>(char* param_1, __6* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __6 local_110;
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "OcclusionReprojection";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
        graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
        bool, graphics::SceneViewData*)::__6&>(&local_110);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
                             graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&,
                             graphics::SceneViewData_const&, bool, graphics::SceneViewData*)::__6&>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38,
                               (__bind*)&local_110);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)&local_110,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
            graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&,
            graphics::SceneViewData_const&, bool, graphics::SceneViewData*)::__6&>(
            char const*,
            (graphics::OcclusionManager_const&)
                ->ReprojectOcclusionBuffer(ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
                                           bool, graphics::SceneViewData*)::__6&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)&local_110, (TaskPriority*)&local_60);
    AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
        graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
        bool, graphics::SceneViewData*)::$_6&>(
        char const*,
        (graphics::OcclusionManager_const&)
            ->ReprojectOcclusionBuffer(ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
                                       bool, graphics::SceneViewData*)::$_6&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)&local_110);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x10083c300, 384 bytes, inline, placed by class name
// std::future<std::invoke_result<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()::{lambda()#1}>::type> ThreadPool::AddTask<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> >::Flush()::{lambda()#1}&&)
/* std::future<std::invoke_result<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}>::type>
   ThreadPool::AddTask<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}>(char const*,
   graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>
   >::Flush()::{lambda()#1}&&) */

ThreadPool*
ThreadPool::AddTask<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                        _1_>(char* param_1, _lambda___1_* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    _lambda___1_* in_RCX;
    _lambda___1_* local_68;
    SafeBucketAllocatorSTL local_60[16];
    undefined8 local_50[2];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = param_2;
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    local_50[0] =
        std::bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                      _1_>(in_RCX);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                        _1_>,
        void>(local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                            (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda() _1_>(
            char const*,
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>::Flush()::_lambda()
                _1_&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
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
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_40);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
return this;
}

// 0x100842390, 384 bytes, inline, placed by class name
// std::future<std::invoke_result<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()::{lambda()#1}>::type> ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()::{lambda()#1}>(char const*, graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >::Flush()::{lambda()#1}&&)
/* std::future<std::invoke_result<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}>::type>
   ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}>(char const*,
   graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>
   >::Flush()::{lambda()#1}&&) */

ThreadPool* ThreadPool::AddTask<graphicutils::BatchDestroyHelper<
    std::unique_ptr<graphics::BillboardBatchInstance,
                    MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
    char* param_1, _lambda___1_* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    _lambda___1_* in_RCX;
    _lambda___1_* local_68;
    SafeBucketAllocatorSTL local_60[16];
    undefined8 local_50[2];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = param_2;
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    local_50[0] = std::bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance,
        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(in_RCX);
    std::allocate_shared<
        std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>, std::allocator_arg_t_const&,
        SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
        std::__bind<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>,
        void>(local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                            (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphicutils::BatchDestroyHelper<std::unique_ptr<
            graphics::BillboardBatchInstance,
            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::Flush()::_lambda() _1_>(
            char const*, graphicutils::BatchDestroyHelper<
                             std::unique_ptr<graphics::BillboardBatchInstance,
                                             MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>::
                             Flush()::_lambda() _1_&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
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
std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
std::scoped_lock<std::mutex>::~scoped_lock(local_40);
std::condition_variable::notify_one();
std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
    (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
return this;
}

// 0x10084d040, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10084d730, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10084d750, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10084de70, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10084de90, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10084e100, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char
   const*, render::Format)::$_5>(char const*,
   graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*,
   render::Format)::$_5&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10084e130, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5>(
    char const*, graphics::OcclusionManager::LoadPackedDepthBuffer(unsigned char const*, render::Format)::$_5&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x10084e460, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x10084eab0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10084ead0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10084f1f0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x10084f210, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x10084f480, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&>(char const*,
   graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager
   const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData
   const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x10084f4b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&>(char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager const&, ThreadPool&, graphics::SceneViewData const&, graphics::SceneViewData const&, bool, graphics::SceneViewData*)::$_6&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::OcclusionReprojection::ReprojectOcclusionBuffer(
    graphics::OcclusionManager_const&, ThreadPool&, graphics::SceneViewData_const&, graphics::SceneViewData_const&,
    bool, graphics::SceneViewData*)::$_6&>(
    char const*, graphics::OcclusionReprojection::ReprojectOcclusionBuffer(graphics::OcclusionManager_const&,
                                                                           ThreadPool&, graphics::SceneViewData_const&,
                                                                           graphics::SceneViewData_const&, bool,
                                                                           graphics::SceneViewData*)::$_6&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x10097ed50, 48 bytes, inline, placed by class name
// ThreadPool::SetAffinity(unsigned int)
void ThreadPool::SetAffinity(uint param_1) {
    _lambda___1_ local_10[2];

    local_10[0].field_0 = param_1;
    RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(this, "SetAffinity", local_10);
}

// 0x100987170, 448 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::type> ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)
/* std::future<std::invoke_result<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>::type>
   ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>(char const*,
   graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2&&) */

ThreadPool* ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(
    shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>(char* param_1, __2* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __2 local_90[48];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "Maya Anim Sample";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>(
        local_90);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                             shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_90);
    std::__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>::
        ~__bind((__bind<graphics::Animation::ConstructFromAnimKeyFrameSet(
                     shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>*)local_90);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_90,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(
            shared_ptr<graphics::AnimKeyFrameSet> const&)::__2>(
            char const*,
            (shared_ptr<graphics::AnimKeyFrameSet> const&)->ConstructFromAnimKeyFrameSet()::__2&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_90, (TaskPriority*)&local_60);
    AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
        char const*, (shared_ptr<graphics::AnimKeyFrameSet> const&)->ConstructFromAnimKeyFrameSet()::$_2&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_90);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x10098d050, 400 bytes, inline, placed by class name
// std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>::type> ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)
/* std::future<std::invoke_result<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>::type>
   ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>(char const*,
   graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
   Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float>
   const&)::$_8&&) */

ThreadPool* ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::__8>(char* param_1, __8* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __8 local_80[32];
    char* local_60;
    SafeBucketAllocatorSTL local_58[16];
    scoped_lock<std::mutex> local_48[12];
    undefined4 local_3c;
    eastl local_38[8];

    local_60 = "AnimUpdate";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                Array<graphics::LabelData, eastl::allocator> const&,
                                                                math::Matrix44T<float> const&)::__8>(local_80);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<graphics::AnimationStateProvider::BeginAsyncTasks(
                             ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
                             math::Matrix44T<float> const&)::__8>,
                         void>(local_58, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38, local_80);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_58);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_80,
                                                            (shared_ptr*)local_58);
    local_3c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
            ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
            math::Matrix44T<float> const&)::__8>(
            char const*, (ThreadPool&)
                             ->BeginAsyncTasks(unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
                                               math::Matrix44T<float> const&)::__8&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_80, (TaskPriority*)&local_60);
    AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                              Array<graphics::LabelData, eastl::allocator> const&,
                                                              math::Matrix44T<float> const&)::$_8>(
        char const*, (ThreadPool&)
                         ->BeginAsyncTasks(unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
                                           math::Matrix44T<float> const&)::$_8&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_80);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_48);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_58);
    return this;
}

// 0x10098eb30, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned int)::{lambda()#1}&&)
void ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(char* param_1,
                                                                                           _lambda___1_* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    vector<eastl::pair<int, int>, eastl::allocator>* local_70;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_68;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_60;
    __atomic_base<unsigned int, true>* local_58;
    scoped_lock<std::mutex> local_50[12];
    undefined4 local_44;
    uint local_40;
    undefined1 local_39;
    eastl local_38[8];

    local_78 = param_1;
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_40 = param_2->field_0;
    local_70 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_58 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(
                                     char const*, unsigned int->SetAffinity()::_lambda() _1_&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                                       (SafeBucketAllocatorSTL*)local_38, (_lambda___1_*)&local_40);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_68, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_50, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_60, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_44 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::_lambda() _1_>(
                    char const*, unsigned int->SetAffinity()::_lambda() _1_&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var5, (char**)local_a0, (TaskPriority*)&local_78,
                                                              (bool*)&local_44);
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
    std::__atomic_base<unsigned int, true>::operator++(local_58);
    std::scoped_lock<std::mutex>::~scoped_lock(local_50);
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
    uVar1 = uVar1 + 1;
    uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_70);
}
while (uVar1 < uVar3)
    ;
}
std::condition_variable::notify_all();
lVar2 = local_90->HeapBeginPtr();
lVar6 = local_90->end();
for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
    std::future<void>::get();
}
eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
return;
}

// 0x10098f4b0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned int)::{lambda()#1}&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}>(char const*, ThreadPool::SetAffinity(unsigned
   int)::{lambda()#1}&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads < ThreadPool::SetAffinity(unsigned int)::{
    lambda() #1
}
> (char const*, ThreadPool::SetAffinity(unsigned int)::{ lambda() #1 }&&)::{
    lambda() #1
}
::operator()() {
    SetAffinity(unsigned int)::{
        lambda() #1
    }
    ::operator()((_lambda___1_*)this);
}

// 0x10098f4c0, 16 bytes, inline, placed by class name
// ThreadPool::SetAffinity(unsigned int)::{lambda()#1}::operator()() const
/* ThreadPool::SetAffinity(unsigned int)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::SetAffinity(unsigned int)::{
    lambda() #1
}
::operator()() {
    this_thread::SetAffinity(field_0);
}

// 0x1009a01f0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009a1780, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1009a17a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1009a1ec0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1009a1ee0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1009a2150, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2>(char const*,
   graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet>
   const&)::$_2&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1009a2180, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(char const*, graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2>(
    char const*,
    graphics::Animation::ConstructFromAnimKeyFrameSet(shared_ptr<graphics::AnimKeyFrameSet> const&)::$_2&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1009a5f00, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009a6590, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1009a65b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1009a6cd0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1009a6cf0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x1009a6f60, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&,
   unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
   math::Matrix44T<float> const&)::$_8>(char const*,
   graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
   Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float>
   const&)::$_8&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x1009a6f90, 11 bytes, inline, placed by class name
// ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8>(char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&, math::Matrix44T<float> const&)::$_8&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<graphics::AnimationStateProvider::BeginAsyncTasks(
    ThreadPool&, unsigned int, Array<graphics::LabelData, eastl::allocator> const&,
    math::Matrix44T<float> const&)::$_8>(
    char const*, graphics::AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int,
                                                                   Array<graphics::LabelData, eastl::allocator> const&,
                                                                   math::Matrix44T<float> const&)::$_8&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x1009e31a0, 528 bytes, inline, placed by class name
// std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>::type> ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)
/* std::future<std::invoke_result<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>::type>
   ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>(char const*,
   Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1&&) */

ThreadPool* ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>(char* param_1, __1* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_1c0;
    SafeBucketAllocatorSTL local_1b8[16];
    scoped_lock<std::mutex> local_1a8[12];
    undefined4 local_19c;
    eastl local_198[8];
    __1 local_190[344];
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_1c0 = "Js5ResourceProvider";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_198, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                       Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                       math::BigInteger*, eastl::string, bool)::__1>(local_190);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<Js5ResourceProvider::Js5ResourceProvider(
                             Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                             math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>,
                         void>(local_1b8, (allocator_arg_t*)local_198, (SafeBucketAllocatorSTL*)local_198, local_190);
    std::__bind<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                         Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                         math::BigInteger*, eastl::string, bool)::$_1>::
        ~__bind((__bind<Js5ResourceProvider::Js5ResourceProvider(
                     Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                     math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>*)local_190);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_1b8);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_1a8, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_190,
                                                            (shared_ptr*)local_1b8);
    local_19c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
            Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
            math::BigInteger*, math::BigInteger*, eastl::string, bool)::__1>(
            char const*,
            Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                     Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                     math::BigInteger*, eastl::string, bool)::__1&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_190, (TaskPriority*)&local_1c0);
    AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                                     Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                                     math::BigInteger*, eastl::string, bool)::$_1>(
        char const*, Js5ResourceProvider::Js5ResourceProvider(
                         Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
                         math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_190);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_1a8);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_1b8);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x1009fe2a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x1009ffaf0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x1009ffb10, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100a002a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100a002c0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100a00530, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1>(char const*,
   Js5ResourceProvider::Js5ResourceProvider(Array<eastl::basic_string<char,
   eastl::allocator>, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&,
   math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::basic_string<char,
   eastl::allocator>, bool)::$_1&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100a00700, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(char const*, Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<Js5ResourceProvider::Js5ResourceProvider(
    Array<eastl::string, eastl::allocator> const&, SystemSettings*, Js5ArchiveSetSettings&, math::BigInteger*,
    math::BigInteger*, math::BigInteger*, eastl::string, bool)::$_1>(
    char const*,
    Js5ResourceProvider::Js5ResourceProvider(Array<eastl::string, eastl::allocator> const&, SystemSettings*,
                                             Js5ArchiveSetSettings&, math::BigInteger*, math::BigInteger*,
                                             math::BigInteger*, eastl::string, bool)::$_1&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100ad9ce0, 384 bytes, inline, placed by class name
// std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char const*)::$_0>::type> ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)
/* std::future<std::invoke_result<http::HTTPRequest::Post(char const*, char
   const*)::$_0>::type> ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char
   const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&) */

ThreadPool* ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::__0>(char* param_1, __0* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __0* in_RCX;
    __0* local_68;
    SafeBucketAllocatorSTL local_60[16];
    undefined8 local_50[2];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = param_2;
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    local_50[0] = std::bind<http::HTTPRequest::Post(char const*, char const*)::__0>(in_RCX);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<http::HTTPRequest::Post(char const*, char const*)::__0>, void>(
        local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                            (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::__0>(
            char const*, (char const*)->Post(char const*)::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
    AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*,
                                                                    (char const*)->Post(char const*)::$_0&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
    return this;
}

// 0x100adde00, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100adefd0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100adeff0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100adf780, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100adf7a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100adfa10, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char
   const*, http::HTTPRequest::Post(char const*, char
   const*)::$_0&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100adfbe0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<http::HTTPRequest::Post(char const*, char const*)::$_0>(
    char const*, http::HTTPRequest::Post(char const*, char const*)::$_0&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100b04490, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)
void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(char* param_1, __0* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    vector<eastl::pair<int, int>, eastl::allocator>* local_70;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_68;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_60;
    __atomic_base<unsigned int, true>* local_58;
    scoped_lock<std::mutex> local_50[12];
    undefined4 local_44;
    _lambda___1_ local_40[7];
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "Flush";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_68 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_60 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_58 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(
                                     char const*, GraphicsApp::MainShutdown()::__0&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                                       (SafeBucketAllocatorSTL*)local_38, local_40);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_68, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_50, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_60, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_44 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(
                    char const*, GraphicsApp::MainShutdown()::__0&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var5, (char**)local_a0, (TaskPriority*)&local_78,
                                                              (bool*)&local_44);
            RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++(local_58);
            std::scoped_lock<std::mutex>::~scoped_lock(local_50);
            std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
            uVar1 = uVar1 + 1;
            uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_70);
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90->HeapBeginPtr();
    lVar6 = local_90->end();
    for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
}

// 0x100b08600, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100b097b0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100b097d0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100b09f60, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100b09f80, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100b0a1f0, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
   GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100b0a3c0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*, GraphicsApp::MainShutdown()::$_0&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::$_0>(char const*,
                                                                       GraphicsApp::MainShutdown()::$_0&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100b1f110, 528 bytes, inline, placed by class name
// std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename const&)::$_0>::type> ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)
/* std::future<std::invoke_result<FileSystem::DeleteDirectory(Filename
   const&)::$_0>::type> ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename
   const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&) */

ThreadPool* ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::__0>(char* param_1, __0* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_1a0;
    SafeBucketAllocatorSTL local_198[16];
    scoped_lock<std::mutex> local_188[12];
    undefined4 local_17c;
    eastl local_178[8];
    __0 local_170[312];
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_1a0 = "DeleteDirectory";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_178, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<FileSystem::DeleteDirectory(Filename_const&)::__0>(local_170);
    std::allocate_shared<std::packaged_task<int()>, SafeBucketAllocatorSTL<std::packaged_task<int()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<int()>>&,
                         std::__bind<FileSystem::DeleteDirectory(Filename_const&)::__0>, void>(
        local_198, (allocator_arg_t*)local_178, (SafeBucketAllocatorSTL*)local_178, local_170);
    std::__bind<FileSystem::DeleteDirectory(Filename_const&)::$_0>::~__bind(
        (__bind<FileSystem::DeleteDirectory(Filename_const&)::__0>*)local_170);
    iVar1 = std::shared_ptr<std::packaged_task<int()>>::operator->((shared_ptr<std::packaged_task<int()>>*)local_198);
    std::packaged_task<int()>::get_future((packaged_task<int()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_188, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<int()>>::shared_ptr((shared_ptr<std::packaged_task<int()>>*)local_170,
                                                           (shared_ptr*)local_198);
    local_17c = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::__0>(
            char const*, FileSystem::DeleteDirectory(Filename_const&)::__0&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_170, (TaskPriority*)&local_1a0);
    AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(char const*,
                                                               FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_170);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_188);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_198);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x100b258d0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100b27490, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100b274b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<int()>>::shared_ptr((shared_ptr<std::packaged_task<int()>>*)this,
                                                           (shared_ptr*)param_1);
}

// 0x100b27c40, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100b27c60, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<int()>>::shared_ptr((shared_ptr<std::packaged_task<int()>>*)this,
                                                           (shared_ptr*)param_1);
}

// 0x100b27ed0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char
   const*, FileSystem::DeleteDirectory(Filename
   const&)::$_0&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<int()>* this_00;

    this_00 = (packaged_task<int()>*)std::shared_ptr<std::packaged_task<int()>>::operator*(
        (shared_ptr<std::packaged_task<int()>>*)this);
    std::packaged_task<int()>::operator()(this_00);
}

// 0x100b280c0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename const&)::$_0>(char const*, FileSystem::DeleteDirectory(Filename const&)::$_0&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<FileSystem::DeleteDirectory(Filename_const&)::$_0>(
    char const*, FileSystem::DeleteDirectory(Filename_const&)::$_0&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100beee90, 400 bytes, inline, placed by class name
// std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type> ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)
/* std::future<std::invoke_result<render::ShaderProgram::CreateFromSourceString()::$_16>::type>
   ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*,
   render::ShaderProgram::CreateFromSourceString()::$_16&&) */

ThreadPool* ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::__16>(char* param_1, __16* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_68;
    SafeBucketAllocatorSTL local_60[16];
    undefined8 local_50[2];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = "CreateFromSourceString";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    local_50[0] = std::bind<render::ShaderProgram::CreateFromSourceString()::__16>(param_2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::ShaderProgram::CreateFromSourceString()::__16>, void>(
        local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                            (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::__16>(
            char const*, render::ShaderProgram::CreateFromSourceString()::__16&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
    AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
        char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
    return this;
}

// 0x100bf2280, 400 bytes, inline, placed by class name
// std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type> ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)
/* std::future<std::invoke_result<render::ShaderProgram::PreRender()::$_43>::type>
   ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
   render::ShaderProgram::PreRender()::$_43&&) */

ThreadPool* ThreadPool::AddTask<render::ShaderProgram::PreRender()::__43>(char* param_1, __43* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    char* local_68;
    SafeBucketAllocatorSTL local_60[16];
    undefined8 local_50[2];
    scoped_lock<std::mutex> local_40[12];
    undefined4 local_34;
    eastl local_30[8];

    local_68 = "PreRender";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_30, (NpcUID*)param_1, (NpcUID*)param_2);
    local_50[0] = std::bind<render::ShaderProgram::PreRender()::__43>(param_2);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::ShaderProgram::PreRender()::__43>, void>(
        local_60, (allocator_arg_t*)local_30, (SafeBucketAllocatorSTL*)local_30, (__bind*)local_50);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_60);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_40, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_50,
                                                            (shared_ptr*)local_60);
    local_34 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<render::ShaderProgram::PreRender()::__43>(
            char const*, render::ShaderProgram::PreRender()::__43&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_50, (TaskPriority*)&local_68);
    AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_50);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_40);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_60);
    return this;
}

// 0x100c015e0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100c027f0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c02810, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c02fa0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c02fc0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c03230, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*,
   render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c03400, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<render::ShaderProgram::CreateFromSourceString()::$_16>(
    char const*, render::ShaderProgram::CreateFromSourceString()::$_16&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c09dc0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::~future() {
    ~future(this);
}

// 0x100c0a200, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c0a220, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c0a940, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c0a960, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c0abd0, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
   render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const
    */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c0ac00, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*, render::ShaderProgram::PreRender()::$_43&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<render::ShaderProgram::PreRender()::$_43>(char const*,
                                                                   render::ShaderProgram::PreRender()::$_43&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c2b8e0, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::__106>(char* param_1, __106* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    undefined8 local_70;
    vector<eastl::pair<int, int>, eastl::allocator>* local_68;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_60;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_58;
    __atomic_base<unsigned int, true>* local_50;
    scoped_lock<std::mutex> local_48[8];
    undefined4 local_40;
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "~RenderDevice";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = *(undefined8*)param_1;
    local_68 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_58 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_50 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::__106>(
                                     char const*, render::RenderDevice::~RenderDevice()::__106&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                                       (SafeBucketAllocatorSTL*)local_38, (_lambda___1_*)&local_70);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_60, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_58, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_40 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::__106>(
                    char const*, render::RenderDevice::~RenderDevice()::__106&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var5, (char**)local_a0, (TaskPriority*)&local_78,
                                                              (bool*)&local_40);
            RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
                char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++(local_50);
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
            std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
            uVar1 = uVar1 + 1;
            uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_68);
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90->HeapBeginPtr();
    lVar6 = local_90->end();
    for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
}

// 0x100c2c400, 432 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)
void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::__108>(
    char* param_1, __108* param_2) {
    long lVar1;
    ulong uVar2;
    mutex* pmVar3;
    _lambda___1_* p_Var4;
    ulong uVar5;
    __108 local_b8;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_98[16];
    shared_ptr<std::packaged_task<void()>> local_88[16];
    char* local_78;
    scoped_lock<std::mutex> local_70[8];
    vector<eastl::pair<int, int>, eastl::allocator>* local_68;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_60;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_58;
    __atomic_base<unsigned int, true>* local_50;
    ThreadPool* local_48;
    bool local_40[7];
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "CreateSecondaryRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<render::RenderDevice::CreateSecondaryRenderContexts()::__108>(&local_b8);
    local_68 = (vector<eastl::pair<int, int>, eastl::allocator>*)&field_8;
    lVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_68);
    if (lVar1 != 0) {
        local_60 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_58 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_50 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar5 = 0;
        local_48 = this;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 std::__bind<render::RenderDevice::CreateSecondaryRenderContexts()::__108>&, void>(
                (SafeBucketAllocatorSTL*)local_98, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38,
                (__bind*)&local_b8);
            pmVar3 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_60, uVar5);
            std::scoped_lock<std::mutex>::scoped_lock(local_70, pmVar3);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    258, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var4 =
                (_lambda___1_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_58, uVar5);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr(local_88, (shared_ptr*)local_98);
            local_40[0] = true;
            local_40[1] = false;
            local_40[2] = false;
            local_40[3] = false;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::__108>(
                    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::__108&&)::_lambda() _1_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var4, (char**)local_88, (TaskPriority*)&local_78,
                                                              local_40);
            RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
                char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
                lambda() #1
            }
            ::~RunOnceOnAllThreadsAsync((_lambda___1_*)local_88);
            std::__atomic_base<unsigned int, true>::operator++(local_50);
            this = local_48;
            std::scoped_lock<std::mutex>::~scoped_lock(local_70);
            std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_98);
            uVar5 = uVar5 + 1;
            uVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_68);
        } while (uVar5 < uVar2);
    }
    std::condition_variable::notify_all();
}

// 0x100c2c5c0, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::__109>(char* param_1,
                                                                                                    __109* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    undefined8 local_70;
    vector<eastl::pair<int, int>, eastl::allocator>* local_68;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_60;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_58;
    __atomic_base<unsigned int, true>* local_50;
    scoped_lock<std::mutex> local_48[8];
    undefined4 local_40;
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "DestroySecondaryRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = *(undefined8*)param_1;
    local_68 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_58 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_50 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<
                std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::__109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::__109&&)::_lambda() _1_&,
                void>((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38, (SafeBucketAllocatorSTL*)local_38,
                      (_lambda___1_*)&local_70);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_60, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_58, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_40 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::__109>(
                    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::__109&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var5, (char**)local_a0, (TaskPriority*)&local_78,
                                                              (bool*)&local_40);
            RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
                char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++(local_50);
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
            std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
            uVar1 = uVar1 + 1;
            uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_68);
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90->HeapBeginPtr();
    lVar6 = local_90->end();
    for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
}

// 0x100c2c8e0, 608 bytes, inline, placed by class name
// void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)
void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__110>(
    char* param_1, __110* param_2) {
    undefined1* this_00;
    ulong uVar1;
    long lVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___2_* p_Var5;
    long lVar6;
    shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>> local_b0[16];
    packaged_task<void()> local_a0[16];
    vector<std::future<void>, BucketAllocatorEASTL> local_90[24];
    char* local_78;
    undefined8 local_70;
    vector<eastl::pair<int, int>, eastl::allocator>* local_68;
    unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>* local_60;
    vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>* local_58;
    __atomic_base<unsigned int, true>* local_50;
    scoped_lock<std::mutex> local_48[8];
    undefined4 local_40;
    undefined1 local_39;
    eastl local_38[8];

    local_78 = "RunWithThreadPoolRenderContexts";
    eastl::destruct<oldscape::highlight::NpcUID*>(local_38, (NpcUID*)param_1, (NpcUID*)param_2);
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::vector();
    this_00 = &field_8;
    uVar1 = this_00->size();
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::reserve(local_90, uVar1);
    local_70 = *(undefined8*)param_1;
    local_68 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00;
    lVar2 = this_00->size();
    if (lVar2 != 0) {
        local_60 = (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)&field_40;
        local_58 = (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                           eastl::allocator>*)&field_96;
        local_50 = (__atomic_base<unsigned int, true>*)&field_192;
        uVar1 = 0;
        do {
            std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                                 std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                                 ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                             (fixedfunction::Methods)0> const&)::__110>(
                                     char const*, (fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                           (fixedfunction::Methods)0> const&)
                                                      ->RunWithThreadPoolRenderContexts()::__110&&)::_lambda() _1_&,
                                 void>((SafeBucketAllocatorSTL*)local_b0, (allocator_arg_t*)local_38,
                                       (SafeBucketAllocatorSTL*)local_38, (_lambda___1_*)&local_70);
            std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_b0);
            std::packaged_task<void()>::get_future(local_a0);
            eastl::vector<std::future<void>, BucketAllocatorEASTL>::emplace_back<std::future<void>>(local_90,
                                                                                                    (future*)local_a0);
            local_a0->~future();
            pmVar4 =
                (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](local_60, uVar1);
            std::scoped_lock<std::mutex>::scoped_lock(local_48, pmVar4);
            if ((char)field_0 != '\0') {
                /* WARNING: Subroutine does not return */
                LogAssertAlways(
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                    214, "Cannot add tasks to the threadpool after stopping it");
            }
            p_Var5 =
                (_lambda___2_*)eastl::vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                                             eastl::allocator>::operator[](local_58, uVar1);
            std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_a0,
                                                                    (shared_ptr*)local_b0);
            local_40 = 1;
            local_39 = 0;
            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
                ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                            (fixedfunction::Methods)0> const&)::__110>(
                    char const*, (fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)
                                     ->RunWithThreadPoolRenderContexts()::__110&&)::_lambda() _2_,
                char const*&, ThreadPool::TaskPriority, bool>(p_Var5, (char**)local_a0, (TaskPriority*)&local_78,
                                                              (bool*)&local_40);
            RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
                fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                        (fixedfunction::Methods)0> const&)::$_110>(
                char const*,
                (fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
                    ->RunWithThreadPoolRenderContexts()::$_110&&)::{
                lambda() #2
            }
            ::~RunOnceOnAllThreads((_lambda___2_*)local_a0);
            std::__atomic_base<unsigned int, true>::operator++(local_50);
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
            std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(local_b0);
            uVar1 = uVar1 + 1;
            uVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_68);
        } while (uVar1 < uVar3);
    }
    std::condition_variable::notify_all();
    lVar2 = local_90->HeapBeginPtr();
    lVar6 = local_90->end();
    for (; lVar2 != lVar6; lVar2 = lVar2 + 8) {
        std::future<void>::get();
    }
    eastl::vector<std::future<void>, BucketAllocatorEASTL>::~vector(local_90);
}

// 0x100c2ccb0, 512 bytes, inline, placed by class name
// std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>::type> ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)
/* std::future<std::invoke_result<render::RenderDevice::RunOnThreadPoolRenderContext(char
   const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>::type>
   ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*,
   fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>(char const*,
   render::RenderDevice::RunOnThreadPoolRenderContext(char const*,
   fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111&&) */

ThreadPool* ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__111>(
    char* param_1, __111* param_2) {
    int iVar1;
    uint uVar2;
    ulong uVar3;
    mutex* pmVar4;
    _lambda___1_* p_Var5;
    __111* local_118;
    SafeBucketAllocatorSTL local_110[16];
    scoped_lock<std::mutex> local_100[12];
    undefined4 local_f4;
    eastl local_f0[8];
    __111 local_e8[176];
    long local_38;

    local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
    local_118 = param_2;
    eastl::destruct<oldscape::highlight::NpcUID*>(local_f0, (NpcUID*)param_1, (NpcUID*)param_2);
    std::bind<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::__111>(
        local_e8);
    std::allocate_shared<std::packaged_task<void()>, SafeBucketAllocatorSTL<std::packaged_task<void()>>,
                         std::allocator_arg_t_const&, SafeBucketAllocatorSTL<std::packaged_task<void()>>&,
                         std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                             char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                  (fixedfunction::Methods)0> const&)::__111>,
                         void>(local_110, (allocator_arg_t*)local_f0, (SafeBucketAllocatorSTL*)local_f0, local_e8);
    std::__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>::
        ~__bind((__bind<render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::__111>*)local_e8);
    iVar1 = std::shared_ptr<std::packaged_task<void()>>::operator->((shared_ptr<std::packaged_task<void()>>*)local_110);
    std::packaged_task<void()>::get_future((packaged_task<void()>*)this);
    uVar2 =
        std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 196), iVar1);
    uVar3 = ((param_1 + 8))->size();
    pmVar4 = (mutex*)std::unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>::operator[](
        (unique_ptr<std::mutex[], std::default_delete<std::mutex[]>>*)(param_1 + 40), (ulong)uVar2 % uVar3);
    std::scoped_lock<std::mutex>::scoped_lock(local_100, pmVar4);
    if (*param_1 != '\0') {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/thread/ThreadPool.h",
                        166, "Cannot add tasks to the threadpool after stopping it");
    }
    p_Var5 = (_lambda___1_*)eastl::
        vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>, eastl::allocator>::operator[](
            (vector<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>,
                    eastl::allocator>*)(param_1 + 96),
            (ulong)uVar2 % uVar3);
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)local_e8,
                                                            (shared_ptr*)local_110);
    local_f4 = 1;
    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>::emplace_back<
        ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
            char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                 (fixedfunction::Methods)0> const&)::__111>(
            char const*, (char const*)
                             ->RunOnThreadPoolRenderContext(
                                 fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                         (fixedfunction::Methods)0> const&)::__111&&)::_lambda() _1_,
        char const*&, ThreadPool::TaskPriority>(p_Var5, (char**)local_e8, (TaskPriority*)&local_118);
    AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
        char const*,
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
        char const*,
        (char const*)
            ->RunOnThreadPoolRenderContext(fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                                   (fixedfunction::Methods)0> const&)::$_111&&)::{
        lambda() #1
    }
    ::~future((_lambda___1_*)local_e8);
    std::__atomic_base<unsigned int, true>::operator++((__atomic_base<unsigned int, true>*)(param_1 + 192));
    std::scoped_lock<std::mutex>::~scoped_lock(local_100);
    std::condition_variable::notify_one();
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)local_110);
    if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
    }
    return this;
}

// 0x100c55e50, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100c56750, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char
   const*,
   render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #1
}
::operator()() {
    render::RenderDevice::~RenderDevice()::$_106::operator()((__106*)this);
}

// 0x100c580d0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c580f0, 16 bytes, complete-object constructor, inline, placed by class name
// ThreadPool::TaskInfo::TaskInfo(std::function<void ()>&&, char const*, ThreadPool::TaskPriority, bool): jumps straight to the base-object constructor

// 0x100c58100, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c58890, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c588b0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c58b20, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char
   const*,
   render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c58c60, 80 bytes, base-object constructor, inline, placed by class name
// ThreadPool::TaskInfo::TaskInfo(std::function<void ()>&&, char const*, ThreadPool::TaskPriority, bool)
/* ThreadPool::TaskInfo::TaskInfo(std::function<void ()>&&, char const*,
   ThreadPool::TaskPriority, bool) */

void ThreadPool::TaskInfo::TaskInfo(function* param_1, char* param_2, undefined4 param_4, undefined1 param_5) {
    std::function<void()>::function((function<void()>*)this, param_1);
    field_48 = param_4;
    field_52 = param_5;
    new (&field_56, param_2) eastl::fixed_string<char, 64, true, eastl::allocator>();
}

// 0x100c58da0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::~RenderDevice()::$_106>(
    char const*, render::RenderDevice::~RenderDevice()::$_106&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c59170, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::~RunOnceOnAllThreadsAsync()
/* ~RunOnceOnAllThreadsAsync() */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::~RunOnceOnAllThreadsAsync() {
    ~RunOnceOnAllThreadsAsync(this);
}

// 0x100c598c0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::RunOnceOnAllThreadsAsync({lambda()#1}&&)
/* RunOnceOnAllThreadsAsync({lambda()#1}&&) */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(_lambda___1_* param_1) {
    RunOnceOnAllThreadsAsync(this, param_1);
}

// 0x100c598e0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::RunOnceOnAllThreadsAsync({lambda()#1}&&)
/* RunOnceOnAllThreadsAsync({lambda()#1}&&) */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5a000, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::RunOnceOnAllThreadsAsync({lambda()#1} const&)
/* RunOnceOnAllThreadsAsync({lambda()#1} const&) */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(_lambda___1_* param_1) {
    RunOnceOnAllThreadsAsync(this, param_1);
}

// 0x100c5a020, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::RunOnceOnAllThreadsAsync({lambda()#1} const&)
/* RunOnceOnAllThreadsAsync({lambda()#1} const&) */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::RunOnceOnAllThreadsAsync(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5a290, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char
   const*,
   render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5a2c0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{lambda()#1}::~RunOnceOnAllThreadsAsync()
/* ~RunOnceOnAllThreadsAsync() */

void ThreadPool::RunOnceOnAllThreadsAsync<render::RenderDevice::CreateSecondaryRenderContexts()::$_108>(
    char const*, render::RenderDevice::CreateSecondaryRenderContexts()::$_108&&)::{
    lambda() #1
}
::~RunOnceOnAllThreadsAsync() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c5a430, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    ~RunOnceOnAllThreads(this);
}

// 0x100c5a760, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char
   const*,
   render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #1
}
::operator()() {
    render::RenderDevice::DestroySecondaryRenderContexts()::$_109::operator()((__109*)this);
}

// 0x100c5a840, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c5a860, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5af80, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c5afa0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5b210, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char
   const*,
   render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5b240, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::DestroySecondaryRenderContexts()::$_109>(
    char const*, render::RenderDevice::DestroySecondaryRenderContexts()::$_109&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c5b3b0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

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

// 0x100c5b6e0, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#1}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char
   const*,
   render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_110&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #1
}
::operator()() {
    (fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)
        ->RunWithThreadPoolRenderContexts()::$_110::operator()((__110*)this);
}

// 0x100c5b800, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c5b820, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2}&&)
/* RunOnceOnAllThreads({lambda()#2}&&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5bf40, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    RunOnceOnAllThreads(this, param_1);
}

// 0x100c5bf60, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::RunOnceOnAllThreads({lambda()#2} const&)
/* RunOnceOnAllThreads({lambda()#2} const&) */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::RunOnceOnAllThreads(_lambda___2_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5c1d0, 32 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::operator()() const
/* ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char
   const*,
   render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void
   (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>
   const&)::$_110&&)::{lambda()#2}::TEMPNAMEPLACEHOLDERVALUE() const */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5c200, 16 bytes, inline, placed by class name
// ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110&&)::{lambda()#2}::~RunOnceOnAllThreads()
/* ~RunOnceOnAllThreads() */

void ThreadPool::RunOnceOnAllThreads<render::RenderDevice::RunWithThreadPoolRenderContexts(
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_110>(
    char const*, render::RenderDevice::RunWithThreadPoolRenderContexts(
                     fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                             (fixedfunction::Methods)0> const&)::$_110&&)::{
    lambda() #2
}
::~RunOnceOnAllThreads() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c5c3a0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::~future()
/* ~future() */

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

// 0x100c5cb50, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c5cb70, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::future({lambda()#1}&&)
/* future({lambda()#1}&&) */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5d290, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    future(this, param_1);
}

// 0x100c5d2b0, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::future({lambda()#1} const&)
/* future({lambda()#1} const&) */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::future(_lambda___1_* param_1) {
    std::shared_ptr<std::packaged_task<void()>>::shared_ptr((shared_ptr<std::packaged_task<void()>>*)this,
                                                            (shared_ptr*)param_1);
}

// 0x100c5d520, 32 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::operator()() const
/* ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*,
   fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111>(char const*,
   render::RenderDevice::RunOnThreadPoolRenderContext(char const*,
   fixedfunction::function<void (render::RenderContext&), 128ul, 16ul,
   (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const
    */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::operator()() {
    packaged_task<void()>* this_00;

    this_00 = (packaged_task<void()>*)std::shared_ptr<std::packaged_task<void()>>::operator*(
        (shared_ptr<std::packaged_task<void()>>*)this);
    std::packaged_task<void()>::operator()(this_00);
}

// 0x100c5d550, 16 bytes, inline, placed by class name
// ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(char const*, render::RenderDevice::RunOnThreadPoolRenderContext(char const*, fixedfunction::function<void (render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111&&)::{lambda()#1}::~future()
/* ~future() */

void ThreadPool::AddTask<render::RenderDevice::RunOnThreadPoolRenderContext(
    char const*,
    fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> const&)::$_111>(
    char const*, render::RenderDevice::RunOnThreadPoolRenderContext(
                     char const*, fixedfunction::function<void(render::RenderContext&), 128ul, 16ul,
                                                          (fixedfunction::Methods)0> const&)::$_111&&)::{
    lambda() #1
}
::~future() {
    std::shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>::~shared_ptr(
        (shared_ptr<std::packaged_task<game::MapSquareEnvIrradianceInfo()>>*)this);
}

// 0x100c95730, 16 bytes, complete-object constructor, inline, placed by class name
// ThreadPool::TaskInfo::TaskInfo(): jumps straight to the base-object constructor

// 0x100c958a0, 64 bytes, inline, placed by class name
// ThreadPool::TaskInfo::operator=(ThreadPool::TaskInfo&&)
/* ThreadPool::TaskInfo::TEMPNAMEPLACEHOLDERVALUE(ThreadPool::TaskInfo&&) */

TaskInfo* ThreadPool::TaskInfo::operator=(TaskInfo* param_1) {
    std::function<void()>::operator=((function<void()>*)this, (function*)param_1);
    field_48 = param_1->field_48;
    field_52 = param_1->field_52;
    eastl::fixed_string<char, 4096, true, eastl::allocator>::operator=(
        (fixed_string<char, 4096, true, eastl::allocator>*)&field_56, (fixed_string*)&param_1->field_56);
    return this;
}

// 0x100c968d0, 64 bytes, base-object constructor, inline, placed by class name
// ThreadPool::TaskInfo::TaskInfo()
void ThreadPool::TaskInfo::TaskInfo() {
    std::function<void()>::function((function<void()>*)this);
    field_48 = 1;
    field_52 = 1;
    new (&field_56) eastl::fixed_string<char, 64, true, eastl::allocator>();
}

} // namespace jag
