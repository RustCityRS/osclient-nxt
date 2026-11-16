// libs/hal/render/state/OGL/VAOManager_OGL.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "VAOManager_OGL.h"

namespace jag::render {
    // 0x100bc6960
    VAOManager::Key::Key(const InputAssemblerState& inputAssemblerState) {
        VertexBuffer* local_48;

        field_0 = inputAssemblerState.GetIndexBuffer();
        uint8_t* this_00 = &field_8;
        new (this_00) eastl::fixed_vector<VertexBuffer const*, 8ul>();
        field_112 = 0;
        uint8_t* this_01 = &field_120;
        new (this_01) eastl::fixed_vector<unsigned int, 8ul>();
        uint32_t uVar2 = ((WorldmapAreaMetadata*)inputAssemblerState.end())->GetMinMapX();
        field_192 = uVar2;
        auto this_04 = inputAssemblerState.GetScreen();
        auto plVar4 = this_04->HeapBeginPtr();
        auto plVar5 = this_04->end();
        if (plVar4 != plVar5) {
            do {
                local_48 = (VertexBuffer*)*plVar4;
                if (local_48 == nullptr)
                    break;
                this_00->push_back(local_48);
                plVar4 = plVar4 + 1;
            } while (plVar4 != plVar5);
        }
        auto this_05 = inputAssemblerState.GetGLVertexBuffers();
        auto arg1 = this_05->begin();
        auto puVar6 = this_05->end();
        for (; (arg1 != puVar6 && (*arg1 != 0)); arg1 = arg1 + 1) {
            this_01->push_back(*arg1);
        }
        long lVar7 = this_00->size();
        long lVar8 = this_01->size();
        if (lVar7 != lVar8) {
            LogAssert("m_vertexBufferPtrs.size() == m_vertexBuffers.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      46, nullptr);
        }
        lVar7 = inputAssemblerState.GetIndexBuffer();
        if (lVar7 != 0) {
            uVar2 = ((BufferInterface*)inputAssemblerState.GetIndexBuffer())->GetNativeBuffer();
            field_112 = uVar2;
        }
    }

    // 0x100bc6b60
    VAOManager::VAOManager() : Singleton<VAOManager>(), RenderDeviceOnEndFrame(true), field_16(4096) {}

    // 0x100bc6d30
    VAOManager::~VAOManager() {
        function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)> local_58[48];
        long local_28;

        field_16->CallOnElements(*local_58);
        (&field_1016392)->~mutex();
        field_1016352.~vector_set();
        field_1016312.~vector_set();
        field_1016272.~vector_set();
        field_1016232.~vector_set();
        field_16->~ResourceList();
    }

    // 0x100bc6f80
    auto VAOManager::Register(const InputAssemblerState& inputAssemblerState,
                              ImmediateRenderContext& immediateRenderContext) {
        ResourceList<VAOManager::Key, VertexArrayObject,
                     eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul>>
            local_120;
        shared_ptr<VertexArrayObject> local_118;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_108;

        if (((RenderDevice*)result.Instance())->IsRenderThread() == '\0') {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      70, nullptr);
        }
        Key local_f8(inputAssemblerState);
        MakeSharedPool<VertexArrayObject, 2048>::MakeShared<>();
        ResourceList<VAOManager::Key, VertexArrayObject,
                     eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul>>::
            AddExistingResource<>(&local_120, (Key*)field_16, (shared_ptr<VertexArrayObject>*)&local_f8);
        if (local_120[0] == (ResourceList<VAOManager::Key, VertexArrayObject,
                                          eastl::fixed_map<VAOManager::Key, shared_ptr<VertexArrayObject>, 4096ul>>)0) {
            LogAssert("vao.m_newResource",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      73, nullptr);
        }
        ((VertexArrayObject*)local_118.operator->())->Create(immediateRenderContext);
        auto result(&local_118);
        return result;
    }

    // 0x100bc75d0
    void VAOManager::GarbageCollect() {
        function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)> afStackY_118[128];
        __2 in_stack_ffffffffffffff68;
        function<bool(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)> local_68[56];
        long local_30;

        auto this_00 = Instance();
        bool cVar1 = this_00->IsRenderThread();
        if (!cVar1) {
            LogAssert("RenderDevice::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      87, nullptr);
        }
        __1* arg1 = nullptr;
        MakeSharedPool<VertexArrayObject, 2048>::PrefetchPool(1, 0);
        std::function<bool(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>::function<
            VAOManager::GarbageCollect()::__1, void>(local_68, arg1);
        new (afStackY_118 + 128) std::function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>();
        field_16->GarbageCollect(*local_68, *((afStackY_118 + 128)));
        (afStackY_118 + 128)->~function();
        new ((afStackY_118 + 128)) std::scoped_lock(field_1016392);
        cVar1 = field_1016232.empty();
        if (cVar1) {
            cVar1 = field_1016272.empty();
            if (cVar1) {
                cVar1 = field_1016312.empty();
                if (cVar1) {
                    cVar1 = field_1016352.empty();
                    if (cVar1)
                        goto LAB_100bc7715;
                }
            }
        }
        std::function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>::function<
            VAOManager::GarbageCollect()::__2, void>(
            (function<void(VAOManager::Key const&, shared_ptr<VertexArrayObject> const&)>*)local_68,
            in_stack_ffffffffffffff68);
        field_16->CallOnElements(*local_68);
        field_1016232.clear();
        field_1016272.clear();
        field_1016312.clear();
        field_1016352.clear();
    LAB_100bc7715:
        ((afStackY_118 + 128))->~scoped_lock();
    }

    // 0x100bc7860
    void VAOManager::DestroyRenderingResources() {
        __3 local_d0;
        function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_c8[168];
        long local_20;

        auto this_00 = Instance();
        local_d0.field_0 = (long)this;
        fixedfunction::function<void(RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            VAOManager::DestroyRenderingResources()::__3, void>(local_c8, &local_d0);
        this_00->RunOnRenderThread(*local_c8);
    }

    // 0x100bc7910
    void VAOManager::InvalidateIndexBuffer(const IndexBuffer& indexBuffer) {
        IndexBuffer* local_20;

        if (indexBuffer.IsCreated() == '\0') {
            LogAssert("indexBuffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      151, nullptr);
        }
        scoped_lock<std::mutex> local_28(field_1016392);
        uint32_t uVar2 = indexBuffer.GetNativeBuffer();
        local_20 = (IndexBuffer*)(((uint64_t)local_20._4_4_ << 32) | (uint32_t)uVar2);
        field_1016232.insert<unsigned int>(local_20);
        local_20 = indexBuffer;
        field_1016312.insert<IndexBuffer const*>(local_20);
    }

    // 0x100bc7b20
    void VAOManager::InvalidateVertexBuffer(const VertexBuffer& vertexBuffer) {
        VertexBuffer* local_20;

        if (vertexBuffer.IsCreated() == '\0') {
            LogAssert("vertexBuffer.IsCreated()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/OGL/"
                      "VAOManager_OGL.cpp",
                      160, nullptr);
        }
        scoped_lock<std::mutex> local_28(field_1016392);
        uint32_t uVar2 = vertexBuffer.GetNativeBuffer();
        local_20 = (VertexBuffer*)(((uint64_t)local_20._4_4_ << 32) | (uint32_t)uVar2);
        field_1016272.insert<unsigned int>(local_20);
        local_20 = vertexBuffer;
        field_1016352.insert<VertexBuffer const*>(local_20);
    }

} // namespace jag::render
