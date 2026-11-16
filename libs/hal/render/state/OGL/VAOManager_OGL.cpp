// libs/hal/render/state/OGL/VAOManager_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "VAOManager_OGL.h"

namespace jag::render {
    // 0x100bc6960, 400 bytes, base-object constructor, placed by __FILE__ string
    // VAOManager::Key::Key(InputAssemblerState const&)
    void VAOManager::Key::Key(InputAssemblerState* param_1) {
        VertexBuffer** this_00;
        uint* this_01;
        undefined4 uVar1;
        WorldmapAreaMetadata* this_02;
        Layout* this_03;
        long* plVar3;
        long* plVar4;
        array<unsigned int, 8ul>* this_04;
        int* piVar5;
        int* piVar6;
        long lVar7;
        long lVar8;
        BufferInterface* this_05;

        field_0 = param_1->GetIndexBuffer();
        this_00 = &field_8;
        new (this_00) eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>();
        field_112 = 0;
        this_01 = &field_120;
        new (this_01) eastl::fixed_vector<unsigned int, 8ul, true, eastl::allocator>();
        this_02 = (WorldmapAreaMetadata*)param_1->end();
        uVar1 = this_02->GetMinMapX();
        field_192 = uVar1;
        this_03 = (Layout*)param_1->GetScreen();
        plVar3 = (long*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_03);
        plVar4 = (long*)this_03->end();
        for (; (plVar3 != plVar4 && (*plVar3 != 0)); plVar3 = plVar3 + 1) {
            eastl::fixed_vector<VertexBuffer_const*, 8ul, true, eastl::allocator>::push_back(this_00);
        }
        this_04 = (array<unsigned int, 8ul>*)param_1->GetGLVertexBuffers();
        piVar5 = (int*)std::array<unsigned int, 8ul>::begin(this_04);
        piVar6 = (int*)std::array<unsigned int, 8ul>::end(this_04);
        for (; (piVar5 != piVar6 && (*piVar5 != 0)); piVar5 = piVar5 + 1) {
            eastl::fixed_vector<unsigned int, 8ul, true, eastl::allocator>::push_back(this_01);
        }
        lVar7 = this_00->size();
        lVar8 = this_01->size();
        if (lVar7 != lVar8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexBufferPtrs.size() == m_vertexBuffers.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      46, (char*)0);
        }
        lVar7 = param_1->GetIndexBuffer();
        if (lVar7 != 0) {
            this_05 = (BufferInterface*)param_1->GetIndexBuffer();
            uVar1 = this_05->GetNativeBuffer();
            field_112 = uVar1;
        }
    }

    // 0x100bc6b50, 16 bytes, complete-object constructor, placed by neighbouring functions
    // VAOManager::Key::Key(InputAssemblerState const&): jumps straight to the base-object constructor

    // 0x100bc6b60, 240 bytes, base-object constructor, placed by neighbouring functions
    // VAOManager::VAOManager()
    void VAOManager::VAOManager() {
        new (this) Singleton<VAOManager>();
        new (this) RenderDeviceOnEndFrame(true);
        field_0 = &PTR__VAOManager_100f27c00;
        new (&field_16, 4096) ResourceList<VAOManager::Key, VertexArrayObject,
                                           eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul,
                                                            true, eastl::less<VAOManager::Key>, eastl::allocator>>();
        new (&field_1016232) eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                               eastl::vector<unsigned int, eastl::allocator>>();
        new (&field_1016272) eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                               eastl::vector<unsigned int, eastl::allocator>>();
        new (&field_1016312) eastl::vector_set<IndexBuffer_const*, eastl::less<IndexBuffer_const*>, eastl::allocator,
                                               eastl::vector<IndexBuffer_const*, eastl::allocator>>();
        new (&field_1016352) eastl::vector_set<VertexBuffer_const*, eastl::less<VertexBuffer_const*>, eastl::allocator,
                                               eastl::vector<VertexBuffer_const*, eastl::allocator>>();
        new (&field_1016392) std::mutex();
    }

    // 0x100bc6d20, 16 bytes, complete-object constructor, placed by neighbouring functions
    // VAOManager::VAOManager(): jumps straight to the base-object constructor

    // 0x100bc6d30, 304 bytes, base-object destructor, placed by neighbouring functions
    // VAOManager::~VAOManager()
    void VAOManager::~VAOManager() {
        function local_58[48];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = &PTR__VAOManager_100f27c00;
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function<
            VAOManager::~function()::__0, void>(local_58);
        (&field_16, local_58)->CallOnElements();
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(
            (function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_58);
        (&field_1016392)->~mutex();
        (&field_1016352)->~vector_set();
        (&field_1016312)->~vector_set();
        (&field_1016272)->~vector_set();
        (&field_1016232)->~vector_set();
        (&field_16)->~ResourceList();
        ~RenderDeviceOnEndFrame();
        ~AutoSingleton();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bc6f50, 16 bytes, complete-object destructor, placed by neighbouring functions
    // VAOManager::~VAOManager(): jumps straight to the base-object destructor

    // 0x100bc6f60, 32 bytes, deleting destructor, placed by neighbouring functions
    // VAOManager::~VAOManager()
    void VAOManager::~VAOManager() {
        ~VAOManager(this);
        operator_delete(this);
    }

    // 0x100bc6f80, 368 bytes, placed by __FILE__ string
    // VAOManager::Register(InputAssemblerState const&, ImmediateRenderContext&)
    VAOManager* VAOManager::Register(InputAssemblerState* param_1, ImmediateRenderContext* param_2) {
        char cVar1;
        RenderDevice* this_00;
        VertexArrayObject* this_01;
        ImmediateRenderContext* in_RCX;
        ResourceList<VAOManager::Key, VertexArrayObject,
                     eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul, true,
                                      eastl::less<VAOManager::Key>, eastl::allocator>>
            local_120[8];
        shared_ptr local_118;
        shared_ptr local_108;
        Key local_f8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      70, (char*)0);
        }
        new (&local_f8) Key(param_2);
        MakeSharedPool<VertexArrayObject, 2048>::MakeShared<>(&local_108,
                                                              (MakeSharedPool<VertexArrayObject, 2048>*)param_2);
        ResourceList<
            VAOManager::Key, VertexArrayObject,
            eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul, true, eastl::less<VAOManager::Key>,
                             eastl::allocator>>::AddExistingResource<>(local_120, (Key*)&param_1->field_16,
                                                                       (shared_ptr*)&local_f8);
        local_108.~shared_ptr();
        local_f8.~Key();
        if (local_120[0] == (ResourceList<VAOManager::Key, VertexArrayObject,
                                          eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul, true,
                                                           eastl::less<VAOManager::Key>, eastl::allocator>>)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("vao.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      73, (char*)0);
        }
        this_01 =
            (VertexArrayObject*)shared_ptr<VertexArrayObject>::operator->((shared_ptr<VertexArrayObject>*)&local_118);
        this_01->Create(in_RCX);
        new (this) shared_ptr<oldscape::dash3d::Decor>(&local_118);
        local_120->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100bc75d0, 448 bytes, placed by __FILE__ string
    // VAOManager::GarbageCollect()
    void VAOManager::GarbageCollect() {
        char cVar1;
        RenderDevice* this_00;
        function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)> local_98[48];
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        cVar1 = this_00->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      87, (char*)0);
        }
        MakeSharedPool<VertexArrayObject, 2048>::PrefetchPool(1, 0);
        std::function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function<
            VAOManager::GarbageCollect()::__1, void>(local_68);
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function(local_98);
        (&field_16, local_68, (function*)local_98)->GarbageCollect();
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(local_98);
        std::function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(
            (function<bool(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_68);
        new (local_98) std::scoped_lock<std::mutex>((mutex*)&field_1016392);
        cVar1 = (&field_1016232)->empty();
        if (cVar1 != '\0') {
            cVar1 = (&field_1016272)->empty();
            if (cVar1 != '\0') {
                cVar1 = (&field_1016312)->empty();
                if (cVar1 != '\0') {
                    cVar1 = (&field_1016352)->empty();
                    if (cVar1 != '\0')
                        goto LAB_100bc7715;
                }
            }
        }
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::function<
            VAOManager::GarbageCollect()::__2, void>(local_68, this);
        (&field_16, local_68)->CallOnElements();
        std::function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>::~function(
            (function<void(VAOManager::Key_const&, shared_ptr<VertexArrayObject> const&)>*)local_68);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    LAB_100bc7715:
        local_98->~scoped_lock();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bc7860, 160 bytes, placed by neighbouring functions
    // VAOManager::DestroyRenderingResources()
    void VAOManager::DestroyRenderingResources() {
        RenderDevice* this_00;
        __3 local_d0;
        function local_c8;
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (RenderDevice*)Instance();
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            VAOManager::DestroyRenderingResources()::__3, void>(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8, &local_d0);
        this_00->RunOnRenderThread(&local_c8);
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100bc7910, 176 bytes, placed by __FILE__ string
    // VAOManager::InvalidateIndexBuffer(IndexBuffer const&)
    void VAOManager::InvalidateIndexBuffer(IndexBuffer* param_1) {
        undefined4 uVar2;
        scoped_lock<std::mutex> local_28[8];
        IndexBuffer* local_20;

        if (param_1->IsCreated() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("indexBuffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      151, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_1016392);
        uVar2 = param_1->GetNativeBuffer();
        local_20 = (IndexBuffer*)CONCAT44(local_20._4_4_, uVar2);
        eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                          eastl::vector<unsigned int, eastl::allocator>>::
            insert<unsigned int>((vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                             eastl::vector<unsigned int, eastl::allocator>>*)&field_1016232,
                                 (uint*)&local_20);
        local_20 = param_1;
        eastl::vector_set<IndexBuffer_const*, eastl::less<IndexBuffer_const*>, eastl::allocator,
                          eastl::vector<IndexBuffer_const*, eastl::allocator>>::
            insert<IndexBuffer_const*>(
                (vector_set<IndexBuffer_const*, eastl::less<IndexBuffer_const*>, eastl::allocator,
                            eastl::vector<IndexBuffer_const*, eastl::allocator>>*)&field_1016312,
                &local_20);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

    // 0x100bc7b20, 176 bytes, placed by __FILE__ string
    // VAOManager::InvalidateVertexBuffer(VertexBuffer const&)
    void VAOManager::InvalidateVertexBuffer(VertexBuffer* param_1) {
        undefined4 uVar2;
        scoped_lock<std::mutex> local_28[8];
        VertexBuffer* local_20;

        if (param_1->IsCreated() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("vertexBuffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      160, (char*)0);
        }
        std::scoped_lock<std::mutex>::scoped_lock(local_28, (mutex*)&field_1016392);
        uVar2 = param_1->GetNativeBuffer();
        local_20 = (VertexBuffer*)CONCAT44(local_20._4_4_, uVar2);
        eastl::vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                          eastl::vector<unsigned int, eastl::allocator>>::
            insert<unsigned int>((vector_set<unsigned int, eastl::less<unsigned int>, eastl::allocator,
                                             eastl::vector<unsigned int, eastl::allocator>>*)&field_1016272,
                                 (uint*)&local_20);
        local_20 = param_1;
        eastl::vector_set<VertexBuffer_const*, eastl::less<VertexBuffer_const*>, eastl::allocator,
                          eastl::vector<VertexBuffer_const*, eastl::allocator>>::
            insert<VertexBuffer_const*>(
                (vector_set<VertexBuffer_const*, eastl::less<VertexBuffer_const*>, eastl::allocator,
                            eastl::vector<VertexBuffer_const*, eastl::allocator>>*)&field_1016352,
                &local_20);
        std::scoped_lock<std::mutex>::~scoped_lock(local_28);
    }

} // namespace jag::render
