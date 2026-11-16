// libs/jtl/AutoSingleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    template <
        typename...> // 11 instantiations, e.g. <ThreadPoolSingleton>, <debug::DebugUIManager>, <graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>> >
    class AutoSingleton {
    public:
        ~AutoSingleton();
        void Instance();
        ThreadPoolSingleton* Create<unsigned int const&>(const unsigned int& arg1);
        void InstancePtr();
        AutoSingleton();
        void Destroy();
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static float m_pSingleton[4]; // = { 0, 0, 0, 0 }
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
        static int64_t m_pSingleton;  // = 0
    };

    // 0x100f372d0
    float AutoSingleton<graphicutils::BatchDestroyManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f37340
    float AutoSingleton<hal::Haptics>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f37ee0
    int64_t AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::m_pSingleton = 0;

    // 0x100f38090
    float AutoSingleton<ThreadPoolSingleton>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f380a0
    float AutoSingleton<ShaderThreadPoolSingleton>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f3f140
    float AutoSingleton<debug::DebugUIManager>::m_pSingleton[4] = {0, 0, 0, 0};

    // 0x100f43c00
    int64_t AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::m_pSingleton =
        0;

    // 0x100f43c18
    int64_t AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::m_pSingleton = 0;

    // 0x100f48938
    int64_t AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::m_pSingleton = 0;

    // 0x100f48948
    int64_t AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::m_pSingleton = 0;

    // 0x100f48958
    int64_t AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::m_pSingleton = 0;

    // 0x100f48968
    int64_t AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::m_pSingleton = 0;

    // 0x100009e70
    AutoSingleton<ThreadPoolSingleton>::~AutoSingleton() {}

    // 0x100009e70: BucketManager::StaticDestructor::StaticDestructor() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BucketManager::SafeStaticDestructor::SafeStaticDestructor() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GPUSetObjectName(unsigned int, unsigned int, Instrumentation::String) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GPUSetObjectName(unsigned int, unsigned int, char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ref_counter_base::~ref_counter_base() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: LoadingScreenScript::AnimLayer::~AnimLayer() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BucketAllocatorEASTL::set_name(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BucketAllocatorEASTL::BucketAllocatorEASTL(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SafeBucketAllocatorEASTL::SafeBucketAllocatorEASTL(char const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SystemPathsCallbackInterface::OnUserFolderChanged(Filename const&, Filename const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: SystemPathsCallbackInterface::OnCacheFolderChanged(Filename const&, Filename const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: DefaultBarrierCompletionFunction::operator()() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: shared_ptr_do_enable_shared_from_this(void*, void*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: shared_ptr_do_tracked_enable_shared_from_this(void*, void*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: shared_ptr_do_tracked_enable_shared_from_this_add_ref(void const*, void const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: shared_ptr_do_tracked_enable_shared_from_this_del_ref(void const*, void const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000c6cd0
    void AutoSingleton<debug::DebugUIManager>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<debug::DebugUIManager>*)operator new(3664);
            new (this) debug::DebugUIManager();
        }
        **this;
    }

    // 0x100147d00
    void AutoSingleton<hal::Haptics>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<hal::Haptics>*)operator new(8);
            new (this) hal::Haptics();
        }
        **this;
    }

    // 0x1001889b0
    ThreadPoolSingleton* AutoSingleton<ThreadPoolSingleton>::Create<unsigned int const&>(const unsigned int& arg1) {
        if (InstancePtr((AutoSingleton<ThreadPoolSingleton>*)arg1) != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h",
                            55, "Attempting to create an AutoSingleton that has already been created.");
        }
        ThreadPoolSingleton* pTVar2 = (ThreadPoolSingleton*)operator new(200);
        new (pTVar2) ThreadPoolSingleton(arg1);
        pTVar2 = (ThreadPoolSingleton*)InstancePtr((AutoSingleton<ThreadPoolSingleton>*)pTVar2);
        return pTVar2;
    }

    // 0x1001b0770
    void AutoSingleton<ThreadPoolSingleton>::InstancePtr() {
        get();
    }

    // 0x1001b07e0
    AutoSingleton<ThreadPoolSingleton>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5948->reset(this);
    }

    // 0x1001c1f70
    void AutoSingleton<debug::DebugUIManager>::Destroy() {
        DebugUIManager* in_RSI;

        PTR_m_pSingleton_100ee5960->reset(in_RSI);
    }

    // 0x1003850e0
    void AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<graphicutils::BatchDestroyHelper<
                        std::unique_ptr<graphics::GeometryBatchInstance,
                                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>*)
            operator new(128);
            new (this) graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>();
        }
        **this;
    }

    // 0x1003853b0
    AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5930->reset(this);
    }

    // 0x100385400
    void AutoSingleton<graphicutils::BatchDestroyManager>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<graphicutils::BatchDestroyManager>*)operator new(64);
            new (this) graphicutils::BatchDestroyManager();
        }
        **this;
    }

    // 0x1003855f0
    AutoSingleton<graphicutils::BatchDestroyManager>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5940->reset(this);
    }

    // 0x100684d70
    void AutoSingleton<debug::DebugUIManager>::InstancePtr() {
        get();
    }

    // 0x100722670
    AutoSingleton<debug::DebugUIManager>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5960->reset(this);
    }

    // 0x10083a610
    void AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>*)
            operator new(128);
            new (this) graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>();
        }
        **this;
    }

    // 0x10083a8b0
    AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5928->reset(this);
    }

    // 0x100840bf0
    void AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<graphicutils::BatchDestroyHelper<
                        std::unique_ptr<graphics::BillboardBatchInstance,
                                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>*)
            operator new(128);
            new (this) graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>();
        }
        **this;
    }

    // 0x100840ec0
    AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5938->reset(this);
    }

    // 0x100980440
    void AutoSingleton<graphicutils::BatchDestroyManager>::Destroy() {
        BatchDestroyManager* in_RSI;

        PTR_m_pSingleton_100ee5940->reset(in_RSI);
    }

    // 0x100afbd30
    AutoSingleton<hal::Haptics>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5958->reset(this);
    }

    // 0x100b04710
    void AutoSingleton<ThreadPoolSingleton>::Destroy() {
        PTR_m_pSingleton_100ee5948->reset(nullptr);
    }

    // 0x100c0d530
    void AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>*)operator new(128);
            render::internal::BufferPool<render::IndexBuffer>::BufferPool();
        }
        **this;
    }

    // 0x100c0e1d0
    AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5968->reset(this);
    }

    // 0x100c0f5b0
    void AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>*)operator new(128);
            render::internal::BufferPool<render::VertexBuffer>::BufferPool();
        }
        **this;
    }

    // 0x100c0fcd0
    AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5970->reset(this);
    }

    // 0x100c10cc0
    void AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>*)operator new(128);
            render::internal::BufferPool<render::ShaderConstBuffer>::BufferPool();
        }
        **this;
    }

    // 0x100c11300
    AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5980->reset(this);
    }

    // 0x100c12260
    void AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>*)operator new(128);
            render::internal::BufferPool<render::PixelUnpackBuffer>::BufferPool();
        }
        **this;
    }

    // 0x100c127d0
    AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool() != '\0') {
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5978->reset(this);
    }

    // 0x100c2b890
    void AutoSingleton<ThreadPoolSingleton>::Instance() {
        void* in_RSI;

        if (this == in_RSI) {
            this = (AutoSingleton<ThreadPoolSingleton>*)operator new(200);
            new (this) ThreadPoolSingleton();
        }
        **this;
    }

} // namespace jag

namespace jag::graphics {
    // 0x100009e70: AnimCurveSegmentCacheBase::~AnimCurveSegmentCacheBase() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AnimationInfoBlendTreeNode::Reset(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: AnimationInfoBlendTreeNode::Update(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ModularParticleSystemDrawable::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&) [3]) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::graphics

namespace jag::game {
    // 0x100009e70: DelayedVariable::DelayedVariable() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: BaseConfigTypeList::~BaseConfigTypeList() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::game

namespace jag::render {
    // 0x100009e70: RenderDeviceOnEndFrame::OnEndFrame() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ScopedGPUMemoryRecorder::ScopedGPUMemoryRecorder(char const*, ...) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::render

namespace jag::oldscape::sound {
    // 0x100009e70: PCMPlayerFactory::~PCMPlayerFactory() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: PCMPlayerMainThread::~PCMPlayerMainThread() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::oldscape::sound

namespace jag::testframework {
    // 0x100009e70: GaiaConsoleSink::OnHistoryCleared() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::testframework

namespace jag::ui {
    // 0x100009e70: UIHookProperties::~UIHookProperties() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::ui

namespace jag::hal::audio {
    // 0x100009e70: SampleReadable::~SampleReadable() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::hal::audio

namespace jag::input::gesture {
    // 0x100009e70: GestureBase::~GestureBase() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::input::gesture

namespace jag::tweak {
    // 0x100009e70: SizeControl::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::tweak

namespace jag::logger {
    // 0x100009e70: Sink::~Sink() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::logger

namespace jag::oldscape::input {
    // 0x100009e70: DefaultInputHandler::ResetState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::oldscape::input

namespace jag::oldscape::dash3d {
    // 0x100009e70: ModelRSevenUnlit::CalculateNormals() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::oldscape::dash3d

namespace jag::oldscape::option {
    // 0x100009e70: IScriptOption::~IScriptOption() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::oldscape::option

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100009e70: RenderBounds::RenderBounds() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

} // namespace jag::oldscape::rs2lib::worldmap
