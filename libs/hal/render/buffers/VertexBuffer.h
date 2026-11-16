// libs/hal/render/buffers/VertexBuffer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag::fixedfunction {
    // 0x100c3c780
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&& arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(uint64_t*)(this + 32) = *(uint64_t*)(arg1 + 16);
        *(void (**)(...))(this + 144) =
            function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
                (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
            (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
                (char const*)->UnmapBuffer(unsigned int)::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3c7d0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c3c7e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)((long)arg1 + 16) = *(uint64_t*)(this + 16);
        uint64_t uVar1 = *(uint64_t*)(this + 8);
        *(uint64_t*)arg1 = *(uint64_t*)this;
        *(uint64_t*)((long)arg1 + 8) = uVar1;
    }

    // 0x100c3c800
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c3c810
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (char const*)->UnmapBuffer(unsigned int)::$_0::operator()((__0*)this, arg1);
    }

    // 0x100c3c8e0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0, void>(
        render::BufferInterface::UnmapBuffer(char const*, unsigned int)::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

    // 0x100c3c9c0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&& arg1) {
        *(uint64_t*)this = 0;
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                           render::UpdateType)::$_1::__1((__1*)(this + 16), (__1*)arg1);
        *(void (**)(...))(this + 144) =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) =
            function<render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int,
                                                           unsigned int, void const*, render::UpdateType)::$_1,
                     void>((char const*)
                               ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                                              render::UpdateType)::$_1&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100c3ca60
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100c3ca70
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                           render::UpdateType)::$_1::__1(arg1, (__1*)this);
    }

    // 0x100c3cae0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100c3caf0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                           render::UpdateType)::$_1::operator()((__1*)this, arg1);
    }

    // 0x100c3cb90
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {
        operator()(this, arg1);
    }

    // 0x100c3cba0
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                              void const*, render::UpdateType)::$_1,
        void>(render::BufferInterface::UpdateBuffer(char const*, unsigned int, unsigned int, unsigned int, unsigned int,
                                                    void const*, render::UpdateType)::$_1&&)::{
        lambda(void*) #1
    }
    ::operator()(void* arg1) const {
        (char const*)
            ->UpdateBuffer(unsigned int, unsigned int, unsigned int, unsigned int, void const*,
                           render::UpdateType)::$_1::~__1((__1*)this);
    }

} // namespace jag::fixedfunction

namespace jag::render {
    class VertexBuffer {
    public:
        bool IsRecyclable() const;
        VertexBuffer(VertexBuffer&& pooledBuffer);
        VertexBuffer(VertexBuffer&& shaderConstBuffer);
        VertexBuffer();
        ~VertexBuffer();
        void Create(unsigned int arg1, unsigned int arg2, const void* arg3);
        void Update(unsigned int arg1, unsigned int arg2, const void* arg3, UpdateType updateType);
        void Destroy();
        auto MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        auto MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4);
        void Unmap();
        ShaderConstBuffer* operator=(VertexBuffer&& vertexBuffer);
        static const char* BUFFER_TYPE_NAME; // = "VertexBuffer"

    private:
        unsigned int field_0;
        uint8_t _unknown_4[4];
        unsigned int field_8;
        uint8_t _unknown_12[4];
        long field_16;
        LockType field_24;
        unsigned int field_28;
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        uint8_t field_44;
        uint8_t field_45[3];
        uint8_t _unknown_48[8];
        GPUMemoryTrackingEntry field_56;
    };

    // 0x10002d860: VertexBuffer::IsRecyclable() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x1001e19d0: PixelBuffer::PixelBuffer(PixelBuffer&&) has the same machine code as VertexBuffer::VertexBuffer(VertexBuffer&&)

    // 0x100bfc010: VertexBuffer::VertexBuffer(VertexBuffer&&) has the same machine code as ShaderStorageBuffer::ShaderStorageBuffer(ShaderStorageBuffer&&)

    // 0x100c15470
    auto VertexBuffer::MapRead(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapReadBuffer(this, 15049794, 34962, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c154c0
    auto VertexBuffer::MapWrite(LockType lockType, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        auto result;
        result.MapWriteBuffer(this, 15049794, 34962, 35044, 35048, lockType, arg2, arg3);
        return result;
    }

    // 0x100c15510
    void VertexBuffer::Unmap() {
        UnmapBuffer("VertexBuffer", 34962);
    }

    // 0x100c3b2a0
    ShaderConstBuffer* VertexBuffer::operator=(VertexBuffer&& vertexBuffer) {
        *this = vertexBuffer;
        return this;
    }

    // 0x100c3e110
    DeferredRenderFunction::~DeferredRenderFunction() {}

} // namespace jag::render

namespace jag::oldscape {
    // 0x1001e2160
    OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection() {
        new (field_12) UISceneSettings();
        new (field_44) callstack::Callstack();
    }

    // 0x1001e23d0
    OSRenderCore_RenderThread_JavaStyle::VertexBufferSection::VertexBufferSection(
        OSRenderCore_RenderThread_JavaStyle::VertexBufferSection&& vertexBufferSection)
        : field_8(vertexBufferSection.field_8), field_0(vertexBufferSection.field_0) {
        new (field_12) UISceneSettings(vertexBufferSection.field_12);
        *(uint32_t*)field_44 = *(uint32_t*)vertexBufferSection.field_44;
    }

} // namespace jag::oldscape

namespace jag::render::internal {
    // 0x100c3b3d0
    bool BufferPool<VertexBuffer>::GarbageCollect(bool)::{
        lambda(ManagedBuffer<VertexBuffer> const&, ManagedBuffer<VertexBuffer> const&) #1
    }
    ::operator()(const ManagedBuffer<VertexBuffer>& bool, const ManagedBuffer<VertexBuffer>& arg2) const {
        lambda(ManagedBuffer<ShaderConstBuffer> const&, ManagedBuffer<ShaderConstBuffer> const&) #1
    }
    ::operator()(_lambda_jag__render__internal__ManagedBuffer<ShaderConstBuffer>
                     const__jag__render__internal__ManagedBuffer<ShaderConstBuffer> const___1_* this,
                 ManagedBuffer<VertexBuffer>* managedBuffer1, ManagedBuffer<VertexBuffer>* managedBuffer2) {
        bool cVar1;
        unsigned int uVar2;
        unsigned int uVar3;

        cVar1 = managedBuffer1->IsPermanent();
        uVar3 = *(unsigned int*)(managedBuffer1 + 80) + 1000;
        if (!cVar1) {
            uVar3 = *(unsigned int*)(managedBuffer1 + 80);
        }
        cVar1 = managedBuffer2->IsPermanent();
        uVar2 = *(unsigned int*)(managedBuffer2 + 80) + 1000;
        if (!cVar1) {
            uVar2 = *(unsigned int*)(managedBuffer2 + 80);
        }
        return uVar2 < uVar3;
    }

} // namespace jag::render::internal
