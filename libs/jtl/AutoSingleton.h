// libs/jtl/AutoSingleton.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag {
    template <
        typename...> // 11 instantiations, e.g. <ThreadPoolSingleton>, <debug::DebugUIManager>, <graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> > >
    class AutoSingleton {
    public:
        ~AutoSingleton();
        void Instance();
        ThreadPoolSingleton* Create<unsigned int const&>(unsigned int const&);
        void InstancePtr();
        AutoSingleton();
        void Destroy();
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 16 bytes */ m_pSingleton; // = { 0, 0, 0, 0 }
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
        static /* 8 bytes */ m_pSingleton;  // = 0
    };

    // 0x100f372d0, 16 bytes, __data
    AutoSingleton<graphicutils::BatchDestroyManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f37340, 16 bytes, __data
    AutoSingleton<hal::Haptics>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f37ee0, 8 bytes, __data
    AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::GeometryBatchInstance,
                        MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::m_pSingleton = 0;

    // 0x100f38090, 16 bytes, __data
    AutoSingleton<ThreadPoolSingleton>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f380a0, 16 bytes, __data
    AutoSingleton<ShaderThreadPoolSingleton>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f3f140, 16 bytes, __data
    AutoSingleton<debug::DebugUIManager>::m_pSingleton = {0, 0, 0, 0};

    // 0x100f43c00, 8 bytes, __data
    AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::m_pSingleton = 0;

    // 0x100f43c18, 8 bytes, __data
    AutoSingleton<graphicutils::BatchDestroyHelper<
        std::unique_ptr<graphics::BillboardBatchInstance,
                        MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::m_pSingleton = 0;

    // 0x100f48938, 8 bytes, __data
    AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::m_pSingleton = 0;

    // 0x100f48948, 8 bytes, __data
    AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::m_pSingleton = 0;

    // 0x100f48958, 8 bytes, __data
    AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::m_pSingleton = 0;

    // 0x100f48968, 8 bytes, __data
    AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::m_pSingleton = 0;

    // 0x100009e70, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()
    /* AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton() */

    void AutoSingleton<ShaderThreadPoolSingleton>::~AutoSingleton() {}

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BucketManager::StaticDestructor::StaticDestructor();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BucketManager::SafeStaticDestructor::SafeStaticDestructor();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GPUSetObjectName(unsigned int, unsigned int, Instrumentation::String);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GPUSetObjectName(unsigned int, unsigned int, char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ref_counter_base::~ref_counter_base();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    LoadingScreenScript::AnimLayer::~AnimLayer();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BucketAllocatorEASTL::set_name(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BucketAllocatorEASTL::BucketAllocatorEASTL(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SafeBucketAllocatorEASTL::SafeBucketAllocatorEASTL(char const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SystemPathsCallbackInterface::OnUserFolderChanged(Filename const&, Filename const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SystemPathsCallbackInterface::OnCacheFolderChanged(Filename const&, Filename const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DefaultBarrierCompletionFunction::operator()();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    shared_ptr_do_enable_shared_from_this(void*, void*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    shared_ptr_do_tracked_enable_shared_from_this(void*, void*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    shared_ptr_do_tracked_enable_shared_from_this_add_ref(void const*, void const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    shared_ptr_do_tracked_enable_shared_from_this_del_ref(void const*, void const*);

    // 0x1000c6cd0, 80 bytes, inline, placed by class name
    // AutoSingleton<debug::DebugUIManager>::Instance()
    void AutoSingleton<debug::DebugUIManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(3664);
            new (this) debug::DebugUIManager();
        }
        std::unique_ptr<debug::DebugUIManager, std::default_delete<debug::DebugUIManager>>::operator*(
            (unique_ptr<debug::DebugUIManager, std::default_delete<debug::DebugUIManager>>*)this);
    }

    // 0x100147d00, 80 bytes, inline, placed by class name
    // AutoSingleton<hal::Haptics>::Instance()
    void AutoSingleton<hal::Haptics>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(8);
            new (this) hal::Haptics();
        }
        std::unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>::operator*(
            (unique_ptr<hal::Haptics, std::default_delete<hal::Haptics>>*)this);
    }

    // 0x1001889b0, 112 bytes, inline, placed by class name
    // ThreadPoolSingleton* AutoSingleton<ThreadPoolSingleton>::Create<unsigned int const&>(unsigned int const&)
    ThreadPoolSingleton* AutoSingleton<ThreadPoolSingleton>::Create<unsigned int const&>(uint* param_1) {
        ThreadPoolSingleton* pTVar2;

        if (InstancePtr() != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h",
                            55, "Attempting to create an AutoSingleton that has already been created.");
        }
        pTVar2 = operator_new(200);
        ThreadPoolSingleton::ThreadPoolSingleton(pTVar2, *param_1);
        pTVar2 = (ThreadPoolSingleton*)InstancePtr();
        return pTVar2;
    }

    // 0x1001b0770, 16 bytes, inline, placed by class name
    // AutoSingleton<ThreadPoolSingleton>::InstancePtr()
    void AutoSingleton<ThreadPoolSingleton>::InstancePtr() {
        std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::get();
    }

    // 0x1001b07e0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<ThreadPoolSingleton>::AutoSingleton()
    void AutoSingleton<ThreadPoolSingleton>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5948->reset(this);
    }

    // 0x1001c1f70, 32 bytes, inline, placed by class name
    // AutoSingleton<debug::DebugUIManager>::Destroy()
    void AutoSingleton<debug::DebugUIManager>::Destroy() {
        DebugUIManager* in_RSI;

        PTR_m_pSingleton_100ee5960->reset(in_RSI);
    }

    // 0x1003850e0, 80 bytes, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> > >::Instance()
    /* AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >
   >::Instance() */

    void jag::AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::
        Instance(
            AutoSingleton<graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>* this) {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            new (this) graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>();
        }
        std::unique_ptr<graphicutils::BatchDestroyHelper<
                            std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>,
                        std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                            graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>::
        operator*(
            (unique_ptr<graphicutils::BatchDestroyHelper<
                            std::unique_ptr<graphics::GeometryBatchInstance,
                                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>,
                        std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                            graphics::GeometryBatchInstance,
                            MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>>*)this);
    }

    // 0x1003853b0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> > >::AutoSingleton()
    /* AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::GeometryBatchInstance,
   MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter> >
   >::AutoSingleton() */

    void jag::AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::GeometryBatchInstance, MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>::
        AutoSingleton(
            AutoSingleton<graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::GeometryBatchInstance,
                                MakeUniquePool<graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>>>* this) {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5930->reset(this);
    }

    // 0x100385400, 80 bytes, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyManager>::Instance()
    void AutoSingleton<graphicutils::BatchDestroyManager>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(64);
            new (this) graphicutils::BatchDestroyManager();
        }
        std::unique_ptr<graphicutils::BatchDestroyManager, std::default_delete<graphicutils::BatchDestroyManager>>::
        operator*((unique_ptr<graphicutils::BatchDestroyManager,
                              std::default_delete<graphicutils::BatchDestroyManager>>*)this);
    }

    // 0x1003855f0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyManager>::AutoSingleton()
    void AutoSingleton<graphicutils::BatchDestroyManager>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5940->reset(this);
    }

    // 0x100684d70, 16 bytes, inline, placed by class name
    // AutoSingleton<debug::DebugUIManager>::InstancePtr()
    void AutoSingleton<debug::DebugUIManager>::InstancePtr() {
        std::unique_ptr<debug::DebugUIManager, std::default_delete<debug::DebugUIManager>>::get();
    }

    // 0x100722670, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<debug::DebugUIManager>::AutoSingleton()
    void AutoSingleton<debug::DebugUIManager>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5960->reset(this);
    }

    // 0x10083a610, 80 bytes, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> > >::Instance()
    void jag::AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            new (this) graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>();
        }
        std::unique_ptr<
            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>,
            std::default_delete<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>>::
        operator*(
            (unique_ptr<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>,
                        std::default_delete<
                            graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>>*)this);
    }

    // 0x10083a8b0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference> > >::AutoSingleton()
    void
    jag::AutoSingleton<graphicutils::BatchDestroyHelper<shared_ptr<graphics::TextureAtlasReference>>>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5928->reset(this);
    }

    // 0x100840bf0, 80 bytes, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> > >::Instance()
    /* AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >
   >::Instance() */

    void jag::AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::
        Instance(AutoSingleton<graphicutils::BatchDestroyHelper<
                     std::unique_ptr<graphics::BillboardBatchInstance,
                                     MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>* this) {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            new (this) graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>();
        }
        std::unique_ptr<graphicutils::BatchDestroyHelper<
                            std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>,
                        std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                            graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>::
        operator*(
            (unique_ptr<graphicutils::BatchDestroyHelper<
                            std::unique_ptr<graphics::BillboardBatchInstance,
                                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>,
                        std::default_delete<graphicutils::BatchDestroyHelper<std::unique_ptr<
                            graphics::BillboardBatchInstance,
                            MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>>*)this);
    }

    // 0x100840ec0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> > >::AutoSingleton()
    /* AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<graphics::BillboardBatchInstance,
   MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter> >
   >::AutoSingleton() */

    void jag::AutoSingleton<graphicutils::BatchDestroyHelper<std::unique_ptr<
        graphics::BillboardBatchInstance, MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>::
        AutoSingleton(
            AutoSingleton<graphicutils::BatchDestroyHelper<
                std::unique_ptr<graphics::BillboardBatchInstance,
                                MakeUniquePool<graphics::BillboardBatchInstance, 64>::UniquePoolDeleter>>>* this) {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5938->reset(this);
    }

    // 0x100980440, 32 bytes, inline, placed by class name
    // AutoSingleton<graphicutils::BatchDestroyManager>::Destroy()
    void AutoSingleton<graphicutils::BatchDestroyManager>::Destroy() {
        BatchDestroyManager* in_RSI;

        PTR_m_pSingleton_100ee5940->reset(in_RSI);
    }

    // 0x100afbd30, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<hal::Haptics>::AutoSingleton()
    void AutoSingleton<hal::Haptics>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5958->reset(this);
    }

    // 0x100b04710, 32 bytes, inline, placed by class name
    // AutoSingleton<ThreadPoolSingleton>::Destroy()
    void AutoSingleton<ThreadPoolSingleton>::Destroy() {
        PTR_m_pSingleton_100ee5948->reset(0);
    }

    // 0x100c0d530, 80 bytes, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::IndexBuffer> >::Instance()
    void AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            render::internal::BufferPool<render::IndexBuffer>::BufferPool();
        }
        std::unique_ptr<render::internal::BufferPool<render::IndexBuffer>,
                        std::default_delete<render::internal::BufferPool<render::IndexBuffer>>>::
        operator*((unique_ptr<render::internal::BufferPool<render::IndexBuffer>,
                              std::default_delete<render::internal::BufferPool<render::IndexBuffer>>>*)this);
    }

    // 0x100c0e1d0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::IndexBuffer> >::AutoSingleton()
    void AutoSingleton<render::internal::BufferPool<render::IndexBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5968->reset(this);
    }

    // 0x100c0f5b0, 80 bytes, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::VertexBuffer> >::Instance()
    void AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            render::internal::BufferPool<render::VertexBuffer>::BufferPool();
        }
        std::unique_ptr<render::internal::BufferPool<render::VertexBuffer>,
                        std::default_delete<render::internal::BufferPool<render::VertexBuffer>>>::
        operator*((unique_ptr<render::internal::BufferPool<render::VertexBuffer>,
                              std::default_delete<render::internal::BufferPool<render::VertexBuffer>>>*)this);
    }

    // 0x100c0fcd0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::VertexBuffer> >::AutoSingleton()
    void AutoSingleton<render::internal::BufferPool<render::VertexBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5970->reset(this);
    }

    // 0x100c10cc0, 80 bytes, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer> >::Instance()
    void AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            render::internal::BufferPool<render::ShaderConstBuffer>::BufferPool();
        }
        std::unique_ptr<render::internal::BufferPool<render::ShaderConstBuffer>,
                        std::default_delete<render::internal::BufferPool<render::ShaderConstBuffer>>>::
        operator*((unique_ptr<render::internal::BufferPool<render::ShaderConstBuffer>,
                              std::default_delete<render::internal::BufferPool<render::ShaderConstBuffer>>>*)this);
    }

    // 0x100c11300, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer> >::AutoSingleton()
    void AutoSingleton<render::internal::BufferPool<render::ShaderConstBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5980->reset(this);
    }

    // 0x100c12260, 80 bytes, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer> >::Instance()
    void AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(128);
            render::internal::BufferPool<render::PixelUnpackBuffer>::BufferPool();
        }
        std::unique_ptr<render::internal::BufferPool<render::PixelUnpackBuffer>,
                        std::default_delete<render::internal::BufferPool<render::PixelUnpackBuffer>>>::
        operator*((unique_ptr<render::internal::BufferPool<render::PixelUnpackBuffer>,
                              std::default_delete<render::internal::BufferPool<render::PixelUnpackBuffer>>>*)this);
    }

    // 0x100c127d0, 80 bytes, base-object constructor, inline, placed by class name
    // AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer> >::AutoSingleton()
    void AutoSingleton<render::internal::BufferPool<render::PixelUnpackBuffer>>::AutoSingleton() {
        if (operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("!m_pSingleton",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/AutoSingleton.h", 17,
                      "Trying to create singleton twice");
        }
        PTR_m_pSingleton_100ee5978->reset(this);
    }

    // 0x100c2b890, 80 bytes, inline, placed by class name
    // AutoSingleton<ThreadPoolSingleton>::Instance()
    void AutoSingleton<ThreadPoolSingleton>::Instance() {
        _func_decltype_nullptr* in_RSI;

        if (std::operator==((unique_ptr*)this, in_RSI)) {
            this = operator_new(200);
            new (this) ThreadPoolSingleton();
        }
        std::unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>::operator*(
            (unique_ptr<ThreadPoolSingleton, std::default_delete<ThreadPoolSingleton>>*)this);
    }

} // namespace jag

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimCurveSegmentCacheBase::~AnimCurveSegmentCacheBase();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimationInfoBlendTreeNode::Reset(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    AnimationInfoBlendTreeNode::Update(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModularParticleSystemDrawable::GetTransformedTriangle(unsigned int, math::Vector4T<float> (&)[3]);

} // namespace jag::graphics

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DelayedVariable::DelayedVariable();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    BaseConfigTypeList::~BaseConfigTypeList();

} // namespace jag::game

namespace jag::render {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderDeviceOnEndFrame::OnEndFrame();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ScopedGPUMemoryRecorder::ScopedGPUMemoryRecorder(char const*, ...);

} // namespace jag::render

namespace jag::oldscape::sound {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayerFactory::~PCMPlayerFactory();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    PCMPlayerMainThread::~PCMPlayerMainThread();

} // namespace jag::oldscape::sound

namespace jag::testframework {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GaiaConsoleSink::OnHistoryCleared();

} // namespace jag::testframework

namespace jag::ui {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    UIHookProperties::~UIHookProperties();

} // namespace jag::ui

namespace jag::hal::audio {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SampleReadable::~SampleReadable();

} // namespace jag::hal::audio

namespace jag::input::gesture {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GestureBase::~GestureBase();

} // namespace jag::input::gesture

namespace jag::tweak {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    SizeControl::ResetToDefault();

} // namespace jag::tweak

namespace jag::logger {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Sink::~Sink();

} // namespace jag::logger

namespace jag::oldscape::input {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    DefaultInputHandler::ResetState();

} // namespace jag::oldscape::input

namespace jag::oldscape::dash3d {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModelRSevenUnlit::CalculateNormals();

} // namespace jag::oldscape::dash3d

namespace jag::oldscape::option {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IScriptOption::~IScriptOption();

} // namespace jag::oldscape::option

namespace jag::oldscape::rs2lib::worldmap {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    RenderBounds::RenderBounds();

} // namespace jag::oldscape::rs2lib::worldmap
